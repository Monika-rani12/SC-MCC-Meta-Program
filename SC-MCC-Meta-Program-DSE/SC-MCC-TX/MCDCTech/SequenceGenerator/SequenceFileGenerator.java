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
	   String kassume="";
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
						String mod_seq = "1";
						if(sortedKeysIndex != -1){
							////System.out.println(p[n2]);
			                        	finalPredicate = finalPredicate + "&&" + mod_seq ;
						}else{
							////System.out.println(p[n2]);
			                        	finalPredicate =  mod_seq;
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
	    finalPredicateArray = kassume + "\n" + finalPredicateArray + "\n" +finalPredicateArray1;
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
			        
					eachLine=eachLine.replace(eachLine,assertStmts +"\n" + eachLine);
					////System.out.println("*********************eachLine1 "+eachLine);
					break;
				}
			}
			
			
			
			
			
		}
		out_metaFile_V3.println(eachLine);
		out_metaFile_V3.flush();
		skipped_predicates.flush();
		eachLine = originalFile.readLine();
	}


	
            
    }
    
    
    

}
