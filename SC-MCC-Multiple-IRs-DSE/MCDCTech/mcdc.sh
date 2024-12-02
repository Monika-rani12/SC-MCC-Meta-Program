#This shell script automates the Sequence generator algorithm and Condition Marker algorithm.
export BENCHMARK=$1
export TOOL=$2
export TOOLNUMBER=$3
rm -f SequenceGenerator/exp/* 
rm -f -R condition-marker/klee-out* 
cd SequenceGenerator/ 
./seqshell.sh "$BENCHMARK.c" "$TOOL"
cd ..
rm SequenceGenerator/Seq_For_Pred*
cd condition-marker/
./kappa.sh $BENCHMARK
mkdir llcode-$BENCHMARK
rm -r klee-new
mkdir klee-new
mkdir $BENCHMARK-run-$TOOL
mkdir $BENCHMARK-ERROR-LIST-$TOOL
mkdir $BENCHMARK-KTEST-$TOOL
./txmcdc.sh $BENCHMARK $TOOL $TOOLNUMBER
cd ..
for x in `ls -v condition-marker/$BENCHMARK-run-$TOOL/${BENCHMARK}KAPPA-*`; 
do 
     cat $x >> condition-marker/$BENCHMARK-run-$TOOL/TESTSUITE-$BENCHMARK.txt
done
./info.sh $BENCHMARK
rm -r condition-marker/klee-out-*

