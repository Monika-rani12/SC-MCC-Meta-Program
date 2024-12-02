
export BENCHMARK=$1
export toolValue=$2
export LD_LIBRARY_PATH=/home/sanghu/TracerX/tracerx/Release+Asserts/lib/:$LD_LIBRARY_PATH


gcc -fprofile-arcs -ftest-coverage -g -I /home/sanghu/TracerX/tracerx/include -L /home/sanghu/TracerX/tracerx/Release+Asserts/lib/ $BENCHMARK-RM/Meta-$BENCHMARK.c -lkleeRuntest
for z in `ls -v ${BENCHMARK}-${toolValue}/klee-out-0/test3*.ktest`; 
do 
KTEST_FILE=${z} ./a.out >> temp1.txt
done
for z in `ls -v ${BENCHMARK}-${toolValue}/klee-out-0/test2*.ktest`; 
do 
KTEST_FILE=${z} ./a.out >> temp1.txt
done
for z in `ls -v ${BENCHMARK}-${toolValue}/klee-out-0/test1*.ktest`; 
do 
KTEST_FILE=${z} ./a.out >> temp1.txt
done
for z in `ls -v ${BENCHMARK}-${toolValue}/klee-out-0/test0*.ktest`; 
do 
KTEST_FILE=${z} ./a.out >> temp1.txt
done
grep "KILLED" temp1.txt > temp2.txt
sort -u temp2.txt > final_result-${BENCHMARK}.txt
rm a.out
feasible=$(grep "KILLED" final_result-${BENCHMARK}.txt | wc -l)
total_seq=$(grep "KILLED" $BENCHMARK-RM/Meta-$BENCHMARK.c | wc -l)


echo "============Mutation Score Report============"
echo "============Mutation Score Report============" >> $BENCHMARK-report.txt
echo "Total number of Killed Mutants =: $feasible"
echo "Total number of Killed Mutants =: $feasible" >> $BENCHMARK-report.txt 
echo "Total number of Reached Mutants =: $total_seq"
echo "Total number of Reached Mutants =: $total_seq" >> $BENCHMARK-report.txt 
((score = (${feasible} * 100) / ${total_seq}))
echo "Mutation Score (Killed/Reached) =: ${score}%"
echo "Mutation Score (Killed/Reached) =: ${score}%" >> $BENCHMARK-report.txt 
echo "============Report-Finish===================="
echo "============Report-Finish====================" >> $BENCHMARK-report.txt
