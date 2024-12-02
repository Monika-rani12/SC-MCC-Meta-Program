#!/bin/ksh
echo sanghu
export BENCHMARK=$1
export tool=$2
export toolnumber=$3
mkdir result-$BENCHMARK-$tool-$toolnumber
echo "********Deleting files started*******"
rm MCDCTech/benchmarks/$BENCHMARK.c
rm MCDCTech/SequenceGenerator/benchmarks/$BENCHMARK.c
mv MCDCTech/SequenceGenerator/$BENCHMARK.c-seq-$tool result-$BENCHMARK-$tool-$toolnumber/
rm -r MCDCTech/SequenceGenerator/exp/*.txt
mv MCDCTech/condition-marker/$BENCHMARK-run-$tool result-$BENCHMARK-$tool-$toolnumber/
mv MCDCTech/condition-marker/llcode-$BENCHMARK result-$BENCHMARK-$tool-$toolnumber/
mv MCDCTech/condition-marker/$BENCHMARK-ERROR-LIST-$tool result-$BENCHMARK-$tool-$toolnumber/
mv MCDCTech/condition-marker/$BENCHMARK-KTEST-$tool result-$BENCHMARK-$tool-$toolnumber/
mv MCDCTech/condition-marker/info result-$BENCHMARK-$tool-$toolnumber/
mv MCDCTech/condition-marker/spec result-$BENCHMARK-$tool-$toolnumber/
mv MCDCTech/condition-marker/messages result-$BENCHMARK-$tool-$toolnumber/
mv MCDCTech/condition-marker/messagesinfo.txt result-$BENCHMARK-$tool-$toolnumber/
rm -r MCDCTech/condition-marker/*.ll
rm -r MCDCTech/condition-marker/*.c
rm -r MCDCTech/condition-marker/*.bc
mv MCDCTech/condition-marker/timeTx-$BENCHMARK.txt result-$BENCHMARK-$tool-$toolnumber/
#rm $BENCHMARK.c
cp $BENCHMARK.c result-$BENCHMARK-$tool-$toolnumber/
mv $BENCHMARK-report.txt result-$BENCHMARK-$tool-$toolnumber/
mv MCDCTech/TESTSUITE-$BENCHMARK.txt result-$BENCHMARK-$tool-$toolnumber/
cd result-$BENCHMARK-$tool-$toolnumber
cat $BENCHMARK-report.txt timeTx-$BENCHMARK.txt > final.txt
#mv nohup.out result-$BENCHMARK-$tool-$toolnumber/
echo "********Deleting files finsihed*******"

