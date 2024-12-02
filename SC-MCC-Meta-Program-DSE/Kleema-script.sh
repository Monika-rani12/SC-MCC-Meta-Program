export BENCHMARK=$1
export toolValue=$2
ulimit -S -s unlimited


cd KLEEMA
mkdir $BENCHMARK-$toolValue
mkdir $BENCHMARK-$toolValue/klee-out-0

mv ../Results-2/$BENCHMARK-Results/result-$BENCHMARK-mode2/$BENCHMARK-KTEST-TX/test3*.ktest $BENCHMARK-$toolValue/klee-out-0/
mv ../Results-2/$BENCHMARK-Results/result-$BENCHMARK-mode2/$BENCHMARK-KTEST-TX/test2*.ktest $BENCHMARK-$toolValue/klee-out-0/
mv ../Results-2/$BENCHMARK-Results/result-$BENCHMARK-mode2/$BENCHMARK-KTEST-TX/test1*.ktest $BENCHMARK-$toolValue/klee-out-0/
mv ../Results-2/$BENCHMARK-Results/result-$BENCHMARK-mode2/$BENCHMARK-KTEST-TX/test0*.ktest $BENCHMARK-$toolValue/klee-out-0/
mv ../Results-2/$BENCHMARK-Results/result-$BENCHMARK-mode2/$BENCHMARK-RESULTS-1/$BENCHMARK.c .

mv ../Results-2/$BENCHMARK-Results/result-$BENCHMARK-mode2/$BENCHMARK-RESULTS-1/skipped_predicates.txt .



./KLEEMA.sh $BENCHMARK $toolValue
rm -rf ../Results-2/$BENCHMARK-Results/result-$BENCHMARK-mode2/$BENCHMARK-RESULTS-$toolValue
mv $BENCHMARK-RESULTS-$toolValue ../Results-2/$BENCHMARK-Results/result-$BENCHMARK-mode2/
mv $BENCHMARK-$toolValue/klee-out-0/test3*.ktest ../Results-2/$BENCHMARK-Results/result-$BENCHMARK-mode2/$BENCHMARK-KTEST-TX/
mv $BENCHMARK-$toolValue/klee-out-0/test2*.ktest ../Results-2/$BENCHMARK-Results/result-$BENCHMARK-mode2/$BENCHMARK-KTEST-TX/
mv $BENCHMARK-$toolValue/klee-out-0/test1*.ktest ../Results-2/$BENCHMARK-Results/result-$BENCHMARK-mode2/$BENCHMARK-KTEST-TX/
mv $BENCHMARK-$toolValue/klee-out-0/test0*.ktest ../Results-2/$BENCHMARK-Results/result-$BENCHMARK-mode2/$BENCHMARK-KTEST-TX/
rm -rf $BENCHMARK-$toolValue
cd ..


