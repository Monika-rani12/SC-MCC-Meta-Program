import java.io.BufferedReader;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;
import java.io.PrintWriter;
import java.util.*; 
import java.io.LineNumberReader;

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
			                        	finalPredicate = finalPredicate + "&&(" +p[n2]+" || !("+p[n2]+"))";
						}else{
							////System.out.println(p[n2]);
			                        	finalPredicate =  "(" +p[n2]+" || !("+p[n2]+"))";
						}
					}
					
					sortedKeysIndex++;
//					if(insertFlag==0){
//					assertStmts1 = "klee_assert(("+p[n2]+") );";					
//					assertStmts2 = "klee_assert((!("+p[n2]+")) );";
//					finalPredicateArray1 = finalPredicateArray1 + assertStmts1 + "\n" +assertStmts2;
//					}
		
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
//            if(finalPredicateArray==""){
//					assertStmts1 = "klee_assert("+predicate+");";					
//					assertStmts2 = "klee_assert(!("+predicate+"));";
//										
//					finalPredicateArray = finalPredicateArray + "\n" +assertStmts1 + "\n" +assertStmts2;
//					}
	    //System.out.println("2*********************"+finalPredicateArray);
	    finalPredicateArray = finalPredicateArray + "\n" +finalPredicateArray1;
	    //System.out.println("1*********************"+predicate);
	    
	    
	    mapPredicate.put(predicate, finalPredicateArray);
            r=PC.readLine();

        }
	

	

	BufferedReader originalFile=new BufferedReader(new FileReader(fileName));
	String eachLine=originalFile.readLine();
	
        PrintWriter out_metaFile_V3=new PrintWriter("exp/meta/MetaWithBraces-V4.c");
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
		
		eachLine = originalFile.readLine();
	}

//	LineNumberReader lineNumberReader = new LineNumberReader(new FileReader("exp/meta/MetaWithBraces-V4.c"));
//	eachLine=lineNumberReader.readLine();
//	PrintWriter out_metaFile_Loop=new PrintWriter("exp/meta/LoopAssertStatements.csv");
//	
//	while(eachLine!=null){
//			//////System.out.println("Reading"+eachLine);
//			//LoopNum++;
//			eachLine = generateDB(eachLine, mapPredicate, lineNumberReader, out_metaFile_Loop);
//			///////////////////////////////////////////////////////////////
//		eachLine=lineNumberReader.readLine();
//		
//	}
//	lineNumberReader.close();
	
            
    }
//	public static int LoopNum = 1;
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//	public static String generateDB(String eachLine,  Map<String,String> mapPredicate, LineNumberReader lineNumberReader, PrintWriter out_metaFile_Loop) throws IOException{
//		
//		if((eachLine.contains(" while(")||eachLine.contains(" while (")||eachLine.contains(" while(") ||eachLine.contains(" for(")||eachLine.contains(" for (")||eachLine.contains("  for ("))&& !eachLine.contains(" while(0)") && !eachLine.contains(" for(;0;)") && !eachLine.contains(" while(1)") && !eachLine.contains(" for(;1;)")){
//				for(String eachPredicate : mapPredicate.keySet()){
//				
//					//////System.out.println("Reading");
//				String eachPredicate1=eachPredicate.substring(1, eachPredicate.length()-1);
//				//////System.out.println("*********************eachPredicate "+eachPredicate1);
//					if(eachPredicate1.length()!=1 && eachLine.replaceAll("\\s+","").contains(eachPredicate1)){
//						
//						int enteringLNum = lineNumberReader.getLineNumber();
//						//////System.out.println("Line number of "+eachLine+" at line "+lineNumberReader.getLineNumber());
//						
//						String assertStmts = mapPredicate.get(eachPredicate);
//						String[] lines = assertStmts.split("\r\n|\r|\n");
//						int totalLines = lines.length-1;
//						if(lines.length ==1){
//							totalLines=2;
//						}
//						//////System.out.println("Total Lines "+lines.length);
//						while(true){
//							eachLine = lineNumberReader.readLine();
//							if(eachLine.contains("}")){
//								//LoopNum++;
//								break;
//							}else if(eachLine.contains("{")){
//								eachLine = generateDB(eachLine,  mapPredicate, lineNumberReader, out_metaFile_Loop);
//							}
//						}
//						int closingLNum = lineNumberReader.getLineNumber()-1;
//						
//						for(int itr=1; itr<=totalLines; itr++){
//							String linedata = "L"+LoopNum+";"+enteringLNum+";"+(enteringLNum+itr)+";"+((closingLNum-totalLines)+itr);
//							out_metaFile_Loop.println(linedata);
//							out_metaFile_Loop.flush();
//							//if(itr==totalLines){LoopNum++;}
//						}
//						++LoopNum;
//						break;
//						
//					}
//					
//				
//			}
//		}
//		return eachLine;
//	}
}
