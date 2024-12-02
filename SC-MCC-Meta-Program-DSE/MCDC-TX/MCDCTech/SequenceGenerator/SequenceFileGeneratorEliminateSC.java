import java.io.BufferedReader;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;
import java.io.PrintWriter;
import java.util.*; 
import java.io.LineNumberReader;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

/**
 *
 * @author user
 */
public class SequenceFileGenerator{
    public static void main(String[] args) throws FileNotFoundException, IOException {

	String fileName = "";
	if (args.length > 0) {
    		fileName = args[0];
    	}else{
	        System.err.println("File name not provided!");
	        System.exit(1);
    	}

	BufferedReader keyValueFile=new BufferedReader(new FileReader("keyValues.txt"));
	String eachValue=keyValueFile.readLine();
	Map<String,String> mapOfPredAndSeq=new HashMap<String,String>();
	////System.out.println("*********************"+mapPredicate.size());

	while(eachValue!=null){
		String nextLine = keyValueFile.readLine();
		////System.out.println("eachValue*********************"+eachValue);
		mapOfPredAndSeq.put(eachValue,nextLine );
		eachValue = keyValueFile.readLine();
	}

        BufferedReader PC=new BufferedReader(new FileReader("exp/Condition_And_Predicates.txt"));
        String r=PC.readLine();
	Map<String,String> mapPredicate=new HashMap<String,String>();
        Map<String,String> mapDecisions=new HashMap<String,String>();
        
        while(r!=null){
	    String predicate = r;
	    String finalPredicateArray="";
	    mapPredicate.put(predicate, finalPredicateArray);
            r=PC.readLine();

        }
	


	LineNumberReader originalFile = new LineNumberReader(new FileReader(fileName));
	String eachLine=originalFile.readLine();

	//BufferedReader originalFile=new BufferedReader(new FileReader(fileName));
	//String eachLine=originalFile.readLine();
	
        PrintWriter out_metaFile_V3=new PrintWriter("exp/meta/MetaWithBraces-V4.c");
        PrintWriter skipped_predicates=new PrintWriter("skipped_predicates.txt");
        skipped_predicates.println("1");
	////System.out.println("*********************"+mapPredicate.size());

	while(eachLine!=null){
		for(String eachPredicate : mapPredicate.keySet()){
			
			if(!(eachLine.contains(" while(")||eachLine.contains(" while (")||eachLine.contains(" while(") ||eachLine.contains(" for(")||eachLine.contains(" for (")||eachLine.contains("  for (") || eachLine.contains("klee_assert("))){
//			String assertStmts = mapPredicate.get(eachPredicate);
                        
			if(eachLine.replaceAll("\\s+","").contains(eachPredicate)){
				String modPred=eachPredicate.replace("&&", "~");
            			modPred=modPred.replace("||", "~");
	    			modPred=modPred.replace("(", "");
	    			modPred=modPred.replace(")", "");
            			String preds[]=modPred.split("~");
            			Set<String> setPreds = new HashSet<String>(Arrays.asList(preds));
 			         
				if((setPreds.size() == preds.length) && !hasContradiction(eachPredicate)){
//				if(assertStmts.contains("||")){
//					assertStmts=assertStmts.replace("||", "&&");
//				}
				//assertStmts=assertStmts.replace("$", "||");
				////System.out.println("predicate1*********************"+eachLine);
				
				//decision and condition assert statements from mcdc mode 
				String DecisionAndConditions="";
	    			if(mapOfPredAndSeq.containsKey(eachLine)){
					DecisionAndConditions = mapOfPredAndSeq.get(eachLine);
					DecisionAndConditions=DecisionAndConditions.replace("(signedlongint)", "");
					DecisionAndConditions=DecisionAndConditions.replace("; ", ";\n");
					mapOfPredAndSeq.put(eachLine,DecisionAndConditions);
					////System.out.println("DecisionAndConditions*********************"+DecisionAndConditions);

					}	
	    			

				eachLine=eachLine.replace(eachLine,DecisionAndConditions +"\n" + eachLine);
				////System.out.println("*********************eachLine1 "+eachLine);
				break;
			}else{
				skipped_predicates.println(originalFile.getLineNumber());
				
			}
			}
			}else  if(eachLine.contains("klee_assert(")){
				eachLine=eachLine.replace("||", "&&");
				eachLine=eachLine.replace("$", "");
			}
			
			
			
		}
		out_metaFile_V3.println(eachLine);
		out_metaFile_V3.flush();
		skipped_predicates.flush();
		eachLine = originalFile.readLine();
	}
	}
	
	 // Precompile patterns
    private static final Pattern patternEquality = Pattern.compile("(?<!\\!\\()\\b(\\w+)\\s*==\\s*(\\w+)\\b");
    private static final Pattern patternInequality = Pattern.compile("(?<!\\!\\()\\b(\\w+)\\s*!=\\s*(\\w+)\\b");
    private static final Pattern patternLessThan = Pattern.compile("(?<!\\!\\()\\b(\\w+)\\s*<\\s*(\\w+)\\b");
    private static final Pattern patternGreaterThanEqual = Pattern.compile("(?<!\\!\\()\\b(\\w+)\\s*>=\\s*(\\w+)\\b");
    private static final Pattern patternLessThanEqual = Pattern.compile("(?<!\\!\\()\\b(\\w+)\\s*<=\\s*(\\w+)\\b");
    private static final Pattern patternGreaterThan = Pattern.compile("(?<!\\!\\()\\b(\\w+)\\s*>\\s*(\\w+)\\b");
    private static final Pattern patternNegatedEquality = Pattern.compile("\\!\\(\\s*(\\w+)\\s*==\\s*(\\w+)\\s*\\)");
    private static final Pattern patternNegatedInequality = Pattern.compile("\\!\\(\\s*(\\w+)\\s*!=\\s*(\\w+)\\s*\\)");
    private static final Pattern patternNegatedLessThanEqual = Pattern.compile("\\!\\(\\s*(\\w+)\\s*<=\\s*(\\w+)\\s*\\)");
    private static final Pattern patternNegatedGreaterThanEqual = Pattern.compile("\\!\\(\\s*(\\w+)\\s*>=\\s*(\\w+)\\s*\\)");
    private static final Pattern patternNegatedLessThan = Pattern.compile("\\!\\(\\s*(\\w+)\\s*<\\s*(\\w+)\\s*\\)");
    private static final Pattern patternNegatedGreaterThan = Pattern.compile("\\!\\(\\s*(\\w+)\\s*>\\s*(\\w+)\\s*\\)");


public static boolean hasContradiction(String predicate) {
        // Check for contradictions between equality and inequality
        if (checkContradictions(predicate, patternEquality, patternInequality)
            || checkContradictions(predicate, patternEquality, patternNegatedEquality)
            || checkContradictions(predicate, patternInequality, patternNegatedInequality)
            || checkContradictions(predicate, patternLessThan, patternGreaterThanEqual)
            || checkContradictions(predicate, patternLessThanEqual, patternGreaterThan)
            || checkContradictions(predicate, patternGreaterThanEqual, patternLessThan)
            || checkContradictions(predicate, patternGreaterThan, patternLessThanEqual)
            || checkContradictions(predicate, patternLessThan, patternNegatedLessThan)
            || checkContradictions(predicate, patternGreaterThanEqual, patternNegatedGreaterThanEqual)
            || checkContradictions(predicate, patternLessThanEqual, patternNegatedLessThanEqual)
            || checkContradictions(predicate, patternGreaterThan, patternNegatedGreaterThan)) {
            return true;
        }

        return false;
    }

    // Utility method to check contradictions between two patterns
    private static boolean checkContradictions(String predicate, Pattern pattern1, Pattern pattern2) {
        Matcher matcher1 = pattern1.matcher(predicate);
        Matcher matcher2 = pattern2.matcher(predicate);

        while (matcher1.find()) {
            String left1 = matcher1.group(1);
            String right1 = matcher1.group(2);
           // System.out.println(matcher1);
            while (matcher2.find()) {
                
                String left2 = matcher2.group(1);
                String right2 = matcher2.group(2);
                //System.out.println(matcher2);
                if ((left1.equals(left2) && right1.equals(right2)) ||
                    (left1.equals(right2) && right1.equals(left2))) {
                        //System.out.println(left1);
                    return true; // Contradiction detected
                }
            }

            matcher2.reset();
        }
matcher1.reset();
        return false;
    }
    
   



}
