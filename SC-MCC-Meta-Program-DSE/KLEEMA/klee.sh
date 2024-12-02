#echo sanghu
#This shell script is written by Sangharatna Godboley
#export BENCHMARK=$1
#export toolValue=$2
#rm -r klee-last

#mkdir $BENCHMARK-$toolValue 
#mv klee-out-0/ $BENCHMARK-$toolValue/

#Below code is to print the C Lines covered
#sed 's/.*c://' $BENCHMARK-$toolValue/klee-out-0/instructions.txt > temp1.txt
#sed 's/:.*//' temp1.txt > temp2.txt
#sort -u -V -o $BENCHMARK-$toolValue/klee-out-0/LinesCovered.txt temp2.txt

#rm -r temp*


export BENCHMARK=$1
export toolValue=$2
mkdir $BENCHMARK-$toolValue
mkdir $BENCHMARK-$toolValue/klee-out-0
mv klee-out-0/test3*.ktest $BENCHMARK-$toolValue/klee-out-0/
mv klee-out-0/test2*.ktest $BENCHMARK-$toolValue/klee-out-0/
mv klee-out-0/test1*.ktest $BENCHMARK-$toolValue/klee-out-0/
mv klee-out-0/test0*.ktest $BENCHMARK-$toolValue/klee-out-0/

rm a.out

export LD_LIBRARY_PATH=/home/sanghu/TracerX/tracerx/Release+Asserts/lib/:$LD_LIBRARY_PATH


#The below code is to run tests on Original Program
gcc -fprofile-arcs -ftest-coverage -g -I /home/sanghu/TracerX/tracerx/include -L /home/sanghu/TracerX/tracerx/Release+Asserts/lib/ ${BENCHMARK}.c -lkleeRuntest

mkdir ${BENCHMARK}-Original
let a=1
for b in `ls -v ${BENCHMARK}-${toolValue}/klee-out-0/test3*.ktest`; 
do 
KTEST_FILE=${b} ./a.out 
done
for b in `ls -v ${BENCHMARK}-${toolValue}/klee-out-0/test2*.ktest`; 
do 
KTEST_FILE=${b} ./a.out 
done
for b in `ls -v ${BENCHMARK}-${toolValue}/klee-out-0/test1*.ktest`; 
do 
KTEST_FILE=${b} ./a.out 
done
for b in `ls -v ${BENCHMARK}-${toolValue}/klee-out-0/test0*.ktest`; 
do 
KTEST_FILE=${b} ./a.out 
done
gcov -abcfu ${BENCHMARK}.c > Cov_report-${BENCHMARK}.txt
rm a.out


sed -E -e '/-:|call|unconditional|branch|-block|#####|\$\$\$\$\$/d' $BENCHMARK.c.gcov > tmp1.txt
cut -d: -f1-2 tmp1.txt > tmp2.txt
sed 's/.*://' tmp2.txt > LinesCovered.txt
sed -r -i 's/\s+//g' LinesCovered.txt

#mv LinesCovered.txt $BENCHMARK-$toolValue/klee-out-0/
rm tmp*.txt






