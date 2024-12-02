
#Following are the tools name and their number to be used. For example to run a trial.c program using this MC/DC tool with KLEE verion so user need to provide this command.....  "$ ./mainmcdc.sh trial KLEE 1" and  For delete "$ ./delete.sh trial KLEE 1" (by default delete command is active within ./mainmcdc.sh).
#KLEE = 1
#Original-Deletion-TX = 2
#BMC-TX = 3
export BENCHMARK=$1
export tool=$2
export toolnumber=$3

cp  $BENCHMARK.c MCDCTech/benchmarks/
cp  $BENCHMARK.c MCDCTech/SequenceGenerator/
cp  $BENCHMARK.c MCDCTech/SequenceGenerator/benchmarks/
cp  MCDCTech/CBMC/Programs/$BENCHMARK.c MCDCTech/CBMC/
cd MCDCTech
./mcdc.sh $BENCHMARK $tool $toolnumber
cd ..
echo "*******************************************************"
echo "*******************************************************"
echo "*******************************************************"
echo "*******************************************************"
echo "*******************************************************"
echo "*******************************************************"
echo "*******************************************************"
#cp MCDCTech/condition-marker/$BENCHMARK-run-$tool/TESTSUITE-$BENCHMARK.txt MCDCTech/
#TotalSequences=$(grep "klee_assert" MCDCTech/SequenceGenerator/keyValues.txt | wc -w)
TotalSequences=$(grep "klee_assert" MCDCTech/SequenceGenerator/exp/meta/MetaWithBraces-V4.c | wc -w)
#echo "Total number of MC/DC Sequences =: $TotalSequences" 
validtestcase=$(ls -l | grep -c ": ASSERTION FAIL" MCDCTech/condition-marker/messagesinfo.txt)
#echo "Total number of Reachable paths or valid test cases =: $validtestcase"
((invalidtestcase = ${TotalSequences} - ${validtestcase}))
((ratiotx = (${validtestcase} * 100) / ${TotalSequences}))
echo "******Final Result Report from Tracer-x******"
echo "******Final Result Report from Tracer-x******" >> $BENCHMARK-report.txt
echo "Total number of Reachable paths or valid test cases =: $validtestcase" 
echo "Total number of Reachable paths or valid test cases =: $validtestcase" >> $BENCHMARK-report.txt
echo "Total number of Unreachable paths or invalid test cases =:$invalidtestcase" 
echo "Total number of Unreachable paths or invalid test cases =:$invalidtestcase" >> $BENCHMARK-report.txt
echo "Total number of MC/DC Sequences =: $TotalSequences" 
echo "Total number of MC/DC Sequences =: $TotalSequences" >> $BENCHMARK-report.txt
echo "The Percentage of valid test cases =: $ratiotx%" 
echo "The Percentage of valid test cases =: $ratiotx%" >> $BENCHMARK-report.txt
echo "******The Tracer-x report Finished*******" 
echo "******The Tracer-x report Finished*******" >> $BENCHMARK-report.txt
./delete.sh $BENCHMARK $tool $toolnumber
echo "******The Execution Finished*******"
rm -f $BENCHMARK.c
