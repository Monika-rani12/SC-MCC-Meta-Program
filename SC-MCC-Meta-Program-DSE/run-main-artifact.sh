export BENCHMARK=$1
export toolValue=$2

ulimit -S -s unlimited
mkdir Results
mkdir Results/$BENCHMARK-Results
mkdir KLEEMA/klee-out-0
cd MCDC-TX
cp ../DSE_Exp_Programs/$BENCHMARK.c .
./mainmcdc.sh $BENCHMARK TX $toolValue
#./clean.sh
#mv instructions.txt ../KLEEMA/klee-out-0/
cp -r result-$BENCHMARK-TX-$toolValue/$BENCHMARK-KTEST-TX/test3*.ktest ../KLEEMA/klee-out-0/
cp -r result-$BENCHMARK-TX-$toolValue/$BENCHMARK-KTEST-TX/test2*.ktest ../KLEEMA/klee-out-0/
cp -r result-$BENCHMARK-TX-$toolValue/$BENCHMARK-KTEST-TX/test1*.ktest ../KLEEMA/klee-out-0/
cp -r result-$BENCHMARK-TX-$toolValue/$BENCHMARK-KTEST-TX/test0*.ktest ../KLEEMA/klee-out-0/
rm -r result-$BENCHMARK-TX-$toolValue/klee-new
rm -r result-$BENCHMARK-TX-$toolValue/llcode-$BENCHMARK
rm -f result-$BENCHMARK-TX-$toolValue/klee-last
mv result-$BENCHMARK-TX-$toolValue ../Results/$BENCHMARK-Results/result-$BENCHMARK-mode1
cd ..
cd KLEEMA

./KLEEMA.sh $BENCHMARK $toolValue
mv $BENCHMARK-RESULTS-$toolValue ../Results/$BENCHMARK-Results/result-$BENCHMARK-mode1/
cd ..
###########################################################################################################




