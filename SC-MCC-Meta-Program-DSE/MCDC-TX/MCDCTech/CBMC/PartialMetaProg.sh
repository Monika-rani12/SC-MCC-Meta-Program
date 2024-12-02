export BENCHMARK=$1
rm -f mod-$BENCHMARK
prev_count=0
prev_arrayname=""
while IFS= read -r line1; do
   
    if [[ "$line1" =~ \[\] ]]; then
        array_name=$(echo "$line1" | grep -oP 'int \K[a-zA-Z_]\w*(?=\[\])')

		
		values=$(echo "$line1" | grep -oP '{\K[^}]*(?=})')

		
		IFS=',' read -ra arr <<< "$values"

		prev_count="${!arr[@]}"
		prev_arrayname=$array_name
		for i in "${!arr[@]}"; do
			echo "int ${array_name}L_${i}_R=${arr[$i]};" >> mod-$BENCHMARK
			#echo "int ${array_name}1_${i}_2=${arr[$i]};"
		done
		echo "$line1" >> mod-$BENCHMARK
    elif [[ "$line1" =~ 'int *' ]]; then
        #echo "$line1"
        array_name=$(echo "$line1" | grep -oP 'int \*\K[a-zA-Z_]\w*')
    	for i in $prev_count; do
			echo "int ${array_name}L_${i}_R=${prev_arrayname}L_${i}_R;" >> mod-$BENCHMARK
			#echo "int ${array_name}1_${i}_2=${prev_arrayname}1_${i}_2;"
	done
	echo "$line1" >> mod-$BENCHMARK

    elif [[ "$line1" =~ 'if' && ("$line1" =~ '||' || "$line1" =~ '&&') ]]; then
    	line1=$(echo "$line1" | sed 's/\[/L\_/g' | sed 's/\]/\_R/g')	
    	echo "$line1" >> mod-$BENCHMARK
    else
	echo "$line1" >> mod-$BENCHMARK
	fi
done < $BENCHMARK

touch keyValues.txt

./cbmc --cover mcdc mod-$BENCHMARK --show-properties > tmp1.txt
cp tmp1.txt cbmc-result.txt
sed -i s/independence' 'condition/MCDC/ tmp1.txt
awk '/condition/ {print NR-2 "," NR+2 "d"}' tmp1.txt | sed -f - tmp1.txt > tmp2.txt
awk '/decision/ {print NR-2 "," NR+2 "d"}' tmp2.txt | sed -f - tmp2.txt > tmp4.txt
cat tmp4.txt | sed '0,/Running with/d' | sed -e '/Property/d' | sed -e '/MCDC/d'| sed 's/.*line \(.*\)function.*/\1/' | tr -d ' ' | sed '/^$/d' > tmp3.txt
index=''
value=''
while read -r line; do 
  index=$line
  
  read -r line;
  #echo $line
line=$(echo "$line" | sed s/calculate_output.*[\$\$]//)

  value="klee_assert(($line)); "
  if [[ $line == *"tmp_if_expr"* ]]; then 
	value=""
  fi
  value=$(echo "$value" | sed 's/L\_/\[/g' | sed 's/\_R/\]/g')	
  value="${arr1[$index]}$value"
  arr1[$index]=$value
done < tmp3.txt
for KEY in "${!arr1[@]}"; do
  index=$(awk "NR==$KEY" mod-$BENCHMARK)
  
  index=$(echo "$index" | sed 's/L\_/\[/g' | sed 's/\_R/\]/g')
  
  echo "$index" >> keyValues.txt
  value=${arr1[$KEY]} 
  echo "$value" >> keyValues.txt

done
sed -i -e s/\(signedlongint\)//g -e s/TRUE/\1/g -e s/FALSE/\0/g keyValues.txt
rm tmp*.txt

