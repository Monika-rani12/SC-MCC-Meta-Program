export BENCHMARK=$1
export tool=$2
export toolValue=$3
res1=$(date +%s.%N)
let dt=0
let m=1
#for w in `ls -v ${BENCHMARK}KAPPA*`;  
#do 
if [ "$dt" -lt 3600 ]
then
/home/sanghu/TracerX/llvm/Release/bin/clang -I /home/sanghu/TracerX/tracerx/include -c -emit-llvm -g $BENCHMARK.c

#KLEE = 1
if [ $toolValue -eq 1 ]; then
/home/sanghu/TracerX/tracerx/Release+Asserts/bin/klee --max-memory=32000 --max-time=7200 --search=random-path --search=nurs:covnew --watchdog -dump-states-on-halt=0 -allow-external-sym-calls -emit-all-errors-in-same-path=true $BENCHMARK.bc
fi

#Original-Deletion-TX = 2
if [ $toolValue -eq 2 ]; then
/home/sanghu/TracerX/tracerx/Release+Asserts/bin/klee --max-memory=32000 --max-time=3600 -solver-backend=z3 --search=dfs --watchdog -dump-states-on-halt=0 -allow-external-sym-calls -emit-all-errors-in-same-path=true $BENCHMARK.bc
fi

#BMC-TX = 3
if [ $toolValue -eq 3 ]; then
/home/sanghu/TracerX/tracerx/Release+Asserts/bin/klee --max-memory=32000 --max-time=3600 -solver-backend=z3 --search=dfs --watchdog -dump-states-on-halt=0 -allow-external-sym-calls -emit-all-errors-in-same-path=true -emit-all-errors $BENCHMARK.bc
fi
#mv klee-out-0/instructions.txt ../../
for z in `find klee-last/test******.ktest -type f`;  #To get error test cases
do
echo $z 
cp ${z} klee-new 
done




/home/sanghu/TracerX/tracerx/Release+Asserts/bin/ktest-tool klee-new/test******.ktest > "$BENCHMARK-run-$tool/$(basename $BENCHMARK)"
echo '()' >>  "$BENCHMARK-run-$tool/$(basename $BENCHMARK)"


#mv $w llcode-$BENCHMARK/


for file in klee-new/test******.ktest
do
  mv "$file" $BENCHMARK-KTEST-$tool/test${m}.ktest
  ((m = m + 1))
done


fi
res2=$(date +%s.%N)
dt=$(echo "$res2 - $res1" | bc)

#done

#for y in `ls -v $BENCHMARK-ERROR-LIST-$tool/${BENCHMARK}KAPPA*`;   
#do 
#     cat $y >> $BENCHMARK-ERROR-LIST-$tool/FOUND-SEQUENCES-$BENCHMARK.txt
#done


dd=$(echo "$dt/86400" | bc)
dt2=$(echo "$dt-86400*$dd" | bc)
dh=$(echo "$dt2/3600" | bc)
dt3=$(echo "$dt2-3600*$dh" | bc)
dm=$(echo "$dt3/60" | bc)
ds=$(echo "$dt3-60*$dm" | bc)

echo "****************Time Analysis Report - Start**************************" >> timeTx-$BENCHMARK.txt 
echo "***Total runtime in seconds" $dt >> timeTx-$BENCHMARK.txt
printf "Total runtime: %d:%02d:%02d:%02.4f\n" $dd $dh $dm $ds >> timeTx-$BENCHMARK.txt
echo "****************Time Analysis Report - End**************************"
echo "****************Time Analysis Report - End**************************" >> timeTx-$BENCHMARK.txt




