#This shell script automates the Sequence generator algorithm and Condition Marker algorithm.
export BENCHMARK=$1
export TOOL=$2
export TOOLNUMBER=$3
#rm -f SequenceGenerator/exp/* 
#rm -f -R condition-marker/klee-out* 
res1A=$(date +%s.%N)
let dtA=0

cd SequenceGenerator/ 
./seqshell.sh "$BENCHMARK.c" "$TOOL"
cd ..

res2A=$(date +%s.%N)
dtA=$(echo "$res2A - $res1A" | bc)

cp SequenceGenerator/exp/meta/MetaWithBraces-V4.c condition-marker/$BENCHMARK.c


cd condition-marker/
#./kappa.sh $BENCHMARK
mkdir llcode-$BENCHMARK
rm -r klee-new
mkdir klee-new
mkdir $BENCHMARK-run-$TOOL
mkdir $BENCHMARK-ERROR-LIST-$TOOL
mkdir $BENCHMARK-KTEST-$TOOL
./txmcdc.sh $BENCHMARK $TOOL $TOOLNUMBER
cd ..

./info.sh $BENCHMARK


rm -r condition-marker/klee-out-*
rm -f $BENCHMARK.c

ddA=$(echo "$dtA/86400" | bc)
dt2A=$(echo "$dtA-86400*$ddA" | bc)
dhA=$(echo "$dt2A/3600" | bc)
dt3A=$(echo "$dt2A-3600*$dhA" | bc)
dmA=$(echo "$dt3A/60" | bc)
dsA=$(echo "$dt3A-60*$dmA" | bc)



echo "###########################################"
echo "###########################################"
echo "###########################################"
echo "###########################################"

echo "****************Time Analysis Report - Start**************************"
echo "****************Time Analysis Report - Start**************************" >> $BENCHMARK-Time-report.txt 
echo "***Total SC-MCC Sequence Generation Time" $dtA 
printf "Total SC-MCC Sequence Generation Time: %d:%02d:%02d:%02.4f\n" $ddA $dhA $dmA $dsA 
echo "***Total SC-MCC Sequence Generation Time" $dtA >> $BENCHMARK-Time-report.txt
printf "Total SC-MCC Sequence Generation Time: %d:%02d:%02d:%02.4f\n" $ddA $dhA $dmA $dsA >> $BENCHMARK-Time-report.txt

echo "###########################################"
echo "###########################################"




