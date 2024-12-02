
BENCHMARK=$1
tool=$2
toolnumber=$3
let pred=1
printf "Predicate,Executiontime,TotalSeq,Feasible,Infeasible\n" >> final-summary-$BENCHMARK.csv
for fn1 in result-$BENCHMARK-$tool-$toolnumber/$BENCHMARK-ERROR-LIST-$tool/${BENCHMARK}KAPPA-pred-*.ll;
do
sed '/Elapsed: /!d' result-$BENCHMARK-$tool-$toolnumber/info/info$pred > tmp.txt
Elapsedtime=$(sed 's/Elapsed: *//' tmp.txt)
Executiontime=$(echo $Elapsedtime | awk -F: '{ print ($1 * 3600) + ($2 * 60) + $3 }')
if [ ! -s tmp.txt ]
then
Executiontime=3600
fi
TotalSeq=$(< "result-$BENCHMARK-$tool-$toolnumber/$BENCHMARK.c-seq-$tool/predicateResults$pred.txt" wc -l)
Feasible=$(ls -l | grep -c ": ASSERTION FAIL: kappa violation" result-$BENCHMARK-$tool-$toolnumber/$BENCHMARK-ERROR-LIST-$tool/${BENCHMARK}KAPPA-pred-$pred.ll)
((Infeasible = ${TotalSeq} - ${Feasible}))
if [ $Executiontime -ge 3600 ] 
then 
Infeasible=0 
fi
printf "$pred,$Executiontime,$TotalSeq,$Feasible,$Infeasible\n" >> final-summary-$BENCHMARK.csv
((pred=pred+1));
find tmp.txt -mindepth 1 -delete
done
head -n 1 final-summary-$BENCHMARK.csv > final-summary-$BENCHMARK-sorted.csv && tail -n +2 final-summary-$BENCHMARK.csv | sort -V  >> final-summary-$BENCHMARK-sorted.csv
awk 'BEGIN{FS=OFS=","}
     NR==1{print}
     NR>1{for (i=1;i<=NF;i++) a[i]+=$i}
     END{printf "Total ,";for (i=2;i<=NF;i++) printf a[i] OFS; printf "\n"}' final-summary-$BENCHMARK-sorted.csv >> Summary-$BENCHMARK.csv
sed '/seconds /!d' result-$BENCHMARK-$tool-$toolnumber/timeTx-$BENCHMARK.txt > timetmp.txt
TotalTime=$(sed 's/^.*seconds //g' timetmp.txt)
sed -i 1s/,/,TotalTime,/2 Summary-$BENCHMARK.csv
sed -i 2s/,/,$TotalTime,/2 Summary-$BENCHMARK.csv
rm timetmp.txt
mv final-summary-$BENCHMARK.csv result-$BENCHMARK-$tool-$toolnumber
mv final-summary-$BENCHMARK-sorted.csv result-$BENCHMARK-$tool-$toolnumber
mv Summary-$BENCHMARK.csv result-$BENCHMARK-$tool-$toolnumber
