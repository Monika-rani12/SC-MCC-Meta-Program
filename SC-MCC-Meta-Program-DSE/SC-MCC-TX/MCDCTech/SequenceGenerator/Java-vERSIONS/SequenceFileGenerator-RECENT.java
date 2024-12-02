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

	
        BufferedReader PC=new BufferedReader(new FileReader("exp/Condition_And_Predicates.txt"));
        String r=PC.readLine();
        String predicate1 = r;
        int no_of_pred=0;
	Map<String,String> mapPredicate=new HashMap<String,String>();
        Map<String,String> mapDecisions=new HashMap<String,String>();
        
        while(r!=null){


  
//Set<Integer> sortedKeys = sortedMapPosition.keySet();
	    String predicate = r;
	    String finalPredicateArray="";
	    String finalPredicateArray1="";
	    String decisionPredicate="";
	    String assertStmts1 = "";					
	   String assertStmts2 = "";
            if(r.contains("&&")||r.contains("||")){
		
            	r=r.replace("&&", "~");
            	r=r.replace("||", "~");
            	r=r.replace("!(", "=nt=");
	    	r=r.replace("(", "");
	    	r=r.replace(")", "");
            	String p[]=r.split("~");
            	no_of_pred++;
	    	BufferedReader PC1=new BufferedReader(new FileReader("exp/predicateResults"+no_of_pred+".txt"));
	    	PrintWriter out_cp_onlyvalue=new PrintWriter("exp/meta/metaFileOfPred-"+no_of_pred+".txt");
            
            	String r1=PC1.readLine();
	    	String tVal[] = null;
		
	    	for(int n1=0;n1<p.length;n1++){
			int insertFlag = 0;
			while(r1!=null){
				String finalPredicate = "";
	        		tVal=r1.split(",");
				Integer sortedKeysIndex = -1;
				for(int n2=0;n2<tVal.length;n2++){
					if(p[n2].contains("=nt=")){
			        		p[n2]=p[n2].replace("=nt=","!(");
			        		p[n2]=p[n2]+")";
			        	}
					////System.out.println(tVal[n2]);
					//Integer mapIndex=sortedKeys.get(sortedKeysIndex);
					if(tVal[n2].equals("F")){
						if(sortedKeysIndex != -1){
							////System.out.println("!"+p[n2] + finalPredicate.contains(p[n2]));
                                			finalPredicate = finalPredicate + "&&" + "!("+p[n2]+")";
						}else{
							////System.out.println("!"+p[n2] + finalPredicate.contains(p[n2]));
                                			finalPredicate = "!("+p[n2]+")";
						}
						

					}else if(tVal[n2].equals("T")){
						if(sortedKeysIndex != -1){
							////System.out.println(p[n2]);
			                        	finalPredicate = finalPredicate + "&&" + p[n2];
						}else{
							////System.out.println(p[n2]);
			                        	finalPredicate = p[n2];
						}
					}else{
						if(sortedKeysIndex != -1){
							////System.out.println(p[n2]);
			                        	finalPredicate = finalPredicate + "&& ((" +p[n2]+") || !("+p[n2]+"))";
						}else{
							////System.out.println(p[n2]);
			                        	finalPredicate =  "((" +p[n2]+") || !("+p[n2]+"))";
						}
					}
					
					sortedKeysIndex++;

		
				}
				decisionPredicate = finalPredicate;
				finalPredicate = "klee_assert((!("+finalPredicate+")));";
				finalPredicateArray = finalPredicateArray + "\n" +finalPredicate;	
				////System.out.println("*********************"+finalPredicate);
				out_cp_onlyvalue.println(finalPredicate);
				out_cp_onlyvalue.flush();	
				tVal=null;

				r1=PC1.readLine();
				insertFlag=1;
	
			}
			
			

	    	}
	         
	    	////System.out.println("*********************"+p.length);

            }

	    //System.out.println("2*********************"+finalPredicateArray);
	    finalPredicateArray = finalPredicateArray + "\n" +finalPredicateArray1;
	    //System.out.println("1*********************"+predicate);
	    
	    
	    mapPredicate.put(predicate, finalPredicateArray);
            r=PC.readLine();

        }
	

	

	LineNumberReader originalFile = new LineNumberReader(new FileReader(fileName));
	String eachLine=originalFile.readLine();

	
        PrintWriter out_metaFile_V3=new PrintWriter("exp/meta/MetaWithBraces-V4.c");
        PrintWriter skipped_predicates=new PrintWriter("skipped_predicates.txt");
        skipped_predicates.println("1");
	////System.out.println("*********************"+mapPredicate.size());

	while(eachLine!=null){
		for(String eachPredicate : mapPredicate.keySet()){
			
			if(!(eachLine.contains(" while(")||eachLine.contains(" while (")||eachLine.contains(" while(") ||eachLine.contains(" for(")||eachLine.contains(" for (")||eachLine.contains("  for (") || eachLine.contains("klee_assert("))){
			String assertStmts = mapPredicate.get(eachPredicate);
			if(eachLine.replaceAll("\\s+","").contains(eachPredicate)){
			        String modPred=eachPredicate.replace("&&", "~");
            			modPred=modPred.replace("||", "~");
	    			modPred=modPred.replace("(", "");
	    			modPred=modPred.replace(")", "");
            			String preds[]=modPred.split("~");
            			Set<String> setPreds = new HashSet<String>(Arrays.asList(preds));
 			         
				if((setPreds.size() == preds.length) && !hasContradiction(eachPredicate)){
					eachLine=eachLine.replace(eachLine,assertStmts +"\n" + eachLine);
					////System.out.println("*********************eachLine1 "+eachLine);
					break;
				}else{
					skipped_predicates.println(originalFile.getLineNumber());
				
				}
			}
			}
			
			
			
			
		}
		out_metaFile_V3.println(eachLine);
		out_metaFile_V3.flush();
		skipped_predicates.flush();
		eachLine = originalFile.readLine();
	}


	
            
    }
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

    // Method to check if a predicate contains contradictions
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
