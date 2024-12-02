# Latest version 13/09/2020

import os
import re
import sys
import random
from collections import deque
lst=[]
def getIndex(s, i):
  
	if s[i] != '(':
		return -1
  
	d = deque()
  
	for k in range(i, len(s)):
  
		if s[k] == ')':
			d.popleft()
  
		elif s[k] == '(':
			d.append(s[i])
  
		if not d:
			return k
  
	return -1

def bracket(s,pos,n,opn,close):
	if close == n :
		string = ""
		for i in s:
			string = string + i
		lst.append(string)
		return
	else :
		if opn > close : 
			s[pos]=')'
			bracket(s, pos + 1, n, opn, close + 1)

		if(opn < n):
			s[pos] = '('
			bracket(s, pos + 1, n, opn + 1, close)

def remove_bracket(s):
	s = s.replace('(','')
	s = s.replace(')','')
	return s



NULL_STRING = " "

mutation_trick = {
" <= ":[" != "," < "," > "," >= "," == "],
" >= ":[" != "," < "," <= "," > "," == "],
" == ":[" != "," < "," > "," <= "," >= "],
" != ":[" == "," < "," > "," <= "," >= "],
" < ":[" != "," > "," <= "," >= "," == "],
" > ":[" != "," < "," <= "," >= "," == "],

"+ ":[" - "," * "," / "," % "],
"- ":[" + "," * "," / "," % "],
"* ":[" + "," - "," / "," % "],
"/ ":[" % "," * "," + "," - "],
"% ":[" / "," + "," - "," * "],


" && ":[" || "," & "," | "," ^ "],
" || ":[" && "," & "," | "," ^ "],
}


def findnth(haystack, needle, n):
    parts= haystack.split(needle, n+1)
    if len(parts)<=n+1:
        return -1
    return len(haystack)-len(parts[-1])-len(needle)



def main (input_file, output_file ) :

	#--------------Check whether directory exits or not-----

	os.system("mkdir "+str(output_file))
	c_n=0 # It contains the condition number
	p_n=0 # It contains the predicate number
	counter = 1

	source_code = open(input_file).read().split('\n')
	covered_code = open("filtered_lines.txt").read().split('\n')
	
	source_code_temp = open(input_file).read().split('\n')
	number_of_lines_of_code = len(source_code) 
	
	
	#---------------------------
#	ano_log_file = open(output_file+"/Orig_log_file.txt", "w") 
	types_faults=open(output_file+"/Types_of_faults_log.txt", "w") 
	LOF=0
	ROF=0
	AOF=0
	PNF=0
	LNF=0
	BOF=0
	ASF=0
	
	mutant_file=output_file+"/Meta-"+input_file
	mutant_operators = mutation_trick.keys()

	for i in range(0,number_of_lines_of_code) :
		flag_p=0
		mutated_line_combined = ""
		
		if source_code[i].strip().startswith("#") or source_code[i].strip().startswith("assert") :
			continue

		if source_code[i].strip().startswith("/*") or source_code[i].strip().endswith("assert") :
			continue

		if source_code[i].strip().startswith("//") or source_code[i].strip().endswith("assert") :
			continue
		
		
			
		if (any(str(i+1) == ext for ext in covered_code)):
			if re.findall(r"\bif\s*\(.*\b",source_code[i]):
				p_n=p_n+1
				flag_p=1
			else:
				flag_p=0
		
		#print(len(mutant_operators))
		#cond_present=0 # This variable will help to count the number of relational operators present
		if flag_p==1:
			ind5 = source_code[i].index("(")
			ind6 = source_code[i].rindex(")")
			rhs_predicate = source_code[i][ind5:ind6+1]
			if "&&" not in source_code[i] and "||" not in source_code[i]:
				c_n=c_n+1
		pnf=0  #it will show either the mutant for pnf is created or not
		#-------------SNF Statement/ Predicate negation faults------------------------------------------
				
		if flag_p==1 and pnf==0:
			
			mutated_line = ""
#			print('hello')
#			print(p_n)
			#print(source_code[i])
			if re.findall(r"\bif\s*\(.*\b",source_code[i]):
				ind1= source_code[i].rindex(")")
				ind2= source_code[i].index("(")
				#print(source_code[i])
				mutated_line= source_code[i][0:ind2+1]+"!("+source_code[i][ind2+1: ind1]+")"+source_code[i][ind1:]
				#print(mutated_line)
				pnf=1
			else:
				continue
#			print("mutated_line")
#			print(mutated_line)
#			print(mutated_line.index("!"))
			ind3 = mutated_line.index("(")
			if "{" not in source_code[i]:
				mutated_line = mutated_line[0:ind3+1]+"("+mutated_line[ind3+1:]+" != "+ rhs_predicate+"){"
			else:
				mutated_line = mutated_line[0:ind3+1]+"("+mutated_line[ind3+1:-1]+" != "+ rhs_predicate+"){"
			mutated_line_combined = mutated_line_combined + mutated_line + "printf(\"PNF KILLED at %d \\n \",__LINE__);}" + "\n"

			PNF=PNF+1
			#If I am maintaing the condition number then the predicates with more than 1 conditions are getting assigned with the wrong index
			with open(mutant_file,"w") as output3:
				source_code_temp[i]=mutated_line_combined + source_code[i]

				output3.write("\n".join(source_code_temp))	


#------------------------------------------------------------------------------------------------------	
#		print('counter*')
#-------------VNF variable/literal/ condition negation faults------------------------------------------
		if flag_p==1:
			mutated_line = ""
			if re.findall(r"\bif\s*\(.*\b",source_code[i]):
				ind1= source_code[i].index("(")
				ind2= source_code[i].rindex(")")
		
			ext_pred=source_code[i][ind1+1:ind2]
			vnf1=[]
			#print("..."+str(source_code[i]))
			if "&&" in ext_pred or "||" in ext_pred:
				#print(ext_pred)
				vnf1=ext_pred.replace("||","&&").split("&&")
				vnf2=vnf1
				#print(vnf1)
				cvnf_c=0
				count_take=0
			for vn1 in vnf1:
				count_take=count_take+1
				cvnf_c=cvnf_c+1
				mod_act1=vn1.replace("!=","=neg=").replace("(","").replace(")","").replace("!","")
				mod_act1=mod_act1.replace("=neg=","!=")
				#print(ext_pred)
				#print("mod_act1:",mod_act1)
				css=str(ext_pred).count(str(mod_act1.strip()))
				#print("Susbstring", css)
				#print("line: "+str(line))
				#print("mod_act1: "+str(mod_act1))
				count_occur=0
				if (count_take>1):
					for it in range(0,count_take-1):
						#print("....",vnf1[it])
						if mod_act1.strip() in vnf1[it]:
							count_occur=count_occur+1
				inx1=findnth(source_code[i], str(mod_act1.strip()), count_occur)
				#inx1=source_code[i].index(str(mod_act1.strip()))
				inx2=inx1+len(mod_act1.strip())
				mod_act=vn1.replace("!=","=neg=").replace("(int )", "int_cast_type").replace("(int)", "int_cast_type1").replace("(","").replace(")","").replace("!","")
				
				mod_lnv="!("+mod_act+")"
				#print(mod_lnv)
				mod_lnv=mod_lnv.replace("=neg=", "!=").replace("int_cast_type","(int )").replace("int_cast_type1", "(int)")
				
				line1=source_code[i][:inx1]+mod_lnv+source_code[i][inx2:]
				#print("***************")
				#print(line1)
				mutated_line=line1
				LNF=LNF+1
				ind3 = mutated_line.index("(")
				if "{" not in source_code[i]:
					mutated_line = mutated_line[0:ind3+1]+" (("+mutated_line[ind3+2:]+" != "+ rhs_predicate+"){"
				else:
					mutated_line = mutated_line[0:ind3+1]+" (("+mutated_line[ind3+2:-1]+" != "+ rhs_predicate+"){"
				mutated_line_combined = mutated_line_combined + mutated_line+ "printf(\"CNF KILLED at %d \\n \",__LINE__);}" + "\n"

				with open(mutant_file,"w") as output3:
					source_code_temp[i]=mutated_line_combined + "\n" + source_code[i]

					output3.write("\n".join(source_code_temp))	

##------------------------------------------------------------------------------------------
			if "||" in source_code[i]:
			        #print("helllllllllllllllllllllllllllllllllllllllllllllo")
				text = source_code[i][(source_code[i].find("if")+2):]
				#print text
				first_open_bracket = text.find("(")
				last_close_bracket = getIndex(text,first_open_bracket)
				text1 = text[first_open_bracket+1:last_close_bracket]
				text1 = remove_bracket(text1)
				temp = text1
				delimiters = "&&" , "||"
				regexPattern = '|'.join(map(re.escape, delimiters))
				conditions = re.split(regexPattern, text1)
				#print conditions
				for sub in conditions:
					temp = temp.replace(sub, ' ')
				operators = temp.split()
				#print operators
				for c in range(len(conditions)):
					conditions[c]=conditions[c].replace("!=","=neg=")
					if '!' in conditions[c] :
						last_index_of_not_operator = conditions[c].rindex('!')
						conditions[c] = conditions[c][:last_index_of_not_operator+1] + "(" + conditions[c][last_index_of_not_operator+1:] + ")"
					else :
						conditions[c] = "(" + conditions[c][:] + ")"
					conditions[c]=conditions[c].replace("=neg=","!=")
				#print conditions
				n = len(conditions)
				s = [""] * 2 * n
			
				lst2=[]
				bracket(s, 0, n, 0, 0)
				#print lst

				skip = 0
				for strg in lst :
					str2 = "("
					j = 0
					k = 0
					p = 1
					try:
						for c in strg[1:] :
							if c == ')' and p < len(strg)-1 :
								str2 = str2 + conditions[j]
								j = j + 1
								str2 = str2 + ")"
						
						
								str2 = str2 + operators[k]
						
								k = k + 1
							elif c == ')' and p == len(strg)-1 :
								str2 = str2 + conditions[j]
								j = j + 1
								str2 = str2 + ")"
							else :
								str2 = str2 + "("
							p = p + 1
						if (skip > 100):
							break
						
						lst2.append(str2)
						#print str2
						skip = skip + 1
					except IndexError:
						print("Error: out of bound error")
						continue
				final_lst = []
				for elm in lst2:
					if elm not in final_lst:
						final_lst.append(elm)
					#print len(final_lst)
				
				for l in final_lst :
					
				
					
					timmed_length = source_code[i].find("if")+2
					previous_line = source_code[i][:first_open_bracket+timmed_length+1]+l+source_code[i][last_close_bracket+timmed_length:]
					previous_line = previous_line.replace("if", "if( ")
					previous_line = previous_line.replace("{", "")
					mutated_line = previous_line+" != "+ rhs_predicate+"){"
						
					mutated_line_combined = mutated_line_combined + mutated_line + "printf(\"ASF KILLED at %d \\n \",__LINE__);}" + "\n"
					ASF=ASF+1
					#with open(mutant_file,"w") as output1:
						#source_code_temp[i]=mutated_line_combined + "\n" + source_code[i]
						#output1.write("\n".join(source_code_temp))

			for m in mutant_operators :
	
			
				number_of_substrings_found = source_code[i].count(m)
			
				

				if number_of_substrings_found > 0:
	
					mutate_at_index = 0 
		
					for r in range(1,number_of_substrings_found+1) :

			
						if mutate_at_index == 0 :
							mutate_at_index = source_code[i].index(m)
						else :
							mutate_at_index = source_code[i].index(m,mutate_at_index+1)
	

						for replace_op in mutation_trick[m]:
							mutated_line = ""
							mutate_with = replace_op

							mutated_line = source_code[i][0:mutate_at_index] + source_code[i][mutate_at_index:].replace(m,mutate_with,1)
							#print(mutated_line)
							keep1=[]
							keep2=[]

							cond_change=0
							cond_num=0
							cd_count=0

							if "&&" in mutated_line or "||" in mutated_line:
								k1=mutated_line.split("||")
								#print("mutated_line", mutated_line)
								#print("k1..", k1)
								if "&&" in mutated_line:
									for k2 in k1:
										if "&&" in k2:
											kn2=k2.split("&&")
											#print("kn21 ", kn2)
											for knn in kn2:
												keep1.append(knn)
										else:
											keep1.append(k2)
								else: 
									keep1=k1


								k3=source_code[i].split("||")
								
								if "&&" in source_code[i]:
									for k4 in k3:
										if "&&" in k4:
											kn2=k4.split("&&")
											#print("kn22 ", kn2)
											for knn in kn2:
												keep2.append(knn)
										else:
											keep2.append(k4)
								else:
									keep2=k3

								
								for k5 in range(0, len(keep2[0])):
									#print(" keep1[0][k5]!= keep2[0][k5]"+str( keep1[0][k5])+"    "+str( keep2[0][k5]))
									str1=str(keep1[0][k5])
									str2=str(keep2[0][k5])
									if str1!= str2:
										cond_change=1
										cd_count=cd_count+1
										#print("k5:"+str(k5))
										cond_num=k5+1
										break;		
							
							
							rep_op=""
							if "+" in replace_op or "-" in replace_op or "*" in replace_op or "/" in replace_op or "%" in replace_op:
								rep_op="AOF"
								AOF=AOF+1
							elif "<=" in replace_op or "<" in replace_op or ">=" in replace_op or ">" in replace_op or "==" in replace_op or "!=" in replace_op:
								rep_op="ROF"
								ROF=ROF+1
							elif "&&" in replace_op or "||" in replace_op:
								rep_op="LOF"
								LOF=LOF+1
							elif " & " in replace_op or " | " in replace_op or " ^ " in replace_op:
								rep_op="BOF"
								BOF=BOF+1
							ind3 = mutated_line.index("(")
							if "{" not in source_code[i]:
								mutated_line = mutated_line[0:ind3+1]+" ("+mutated_line[ind3+1:]+" != "+ rhs_predicate+"){"
							else:
								mutated_line = mutated_line[0:ind3+1]+" ("+mutated_line[ind3+1:-1]+" != "+ rhs_predicate+"){"
							mutated_line_combined = mutated_line_combined + mutated_line + "printf(\""+rep_op+" KILLED at %d \\n \",__LINE__);}" + "\n"
							with open(mutant_file,"w") as output1:
								source_code_temp[i]=mutated_line_combined + "\n" + source_code[i]

								output1.write("\n".join(source_code_temp))	
			

			
				
#							

		if "&&" in source_code[i] or "||" in source_code[i]:
			ct=source_code[i].split("&&")
			ct2=[]
			for ct1 in ct:
				ct2.append(ct1.split("||"))
			c_n=c_n+len(ct2)
				
	types_faults.write("Logical Operator Faults: "+str(LOF)+"\n")
	types_faults.write("Arithmetic Operator Faults: "+str(AOF)+"\n")
	types_faults.write("Relational Operator Faults: "+str(ROF)+"\n")
	types_faults.write("Literal Negation Faults: "+str(LNF)+"\n")
	types_faults.write("Predicate Negation Faults: "+str(PNF)+"\n")	
	types_faults.write("Bitwise Operator Faults: "+str(BOF)+"\n")	
	types_faults.write("Associate Shift Faults: "+str(ASF)+"\n")	
	return

def write_to_file ( mutant_file_name, source_code, mutated_line_number, mutated_line ) :
#
	output_file = open(mutant_file_name, "w")

	for i in range(0,len(source_code)) :
		if i == mutated_line_number : 
			output_file.write("/* XXX: original code was : "+source_code[i]+" */\n")
			output_file.write(mutated_line+"\n")
		else :
			output_file.write(source_code[i]+"\n")

	output_file.close()
#

if __name__ == "__main__":
#
	
	print("--------------------------")
	if len(sys.argv) == 2: # For testing 
		#os.system("indent sys.argv[1] -o program.c")
		main(sys.argv[1]) 

	elif len(sys.argv) == 3: 
		assert(sys.argv[1] != sys.argv[2]) # Input file and Output file cannot be same

		main(sys.argv[1],sys.argv[2])  

	else:
		print ("Usage: python mutator.py <file-to-mutate.c> [output-directory-name.c]")
#
