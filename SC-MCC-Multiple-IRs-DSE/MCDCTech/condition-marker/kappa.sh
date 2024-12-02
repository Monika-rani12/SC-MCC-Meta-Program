export BENCHMARK=$1
echo ${BENCHMARK}
/home/sanghu/TracerX/llvm/Release/bin/clang -I /home/sanghu/TracerX/tracerx/include -c -O0 -emit-llvm -g ${BENCHMARK}.c
#If below commands complain then use "sudo apt install llvm-3.5"
g++ -std=c++11 -o markcond markcond.cpp `/home/sanghu/TracerX/llvm/Release/bin/llvm-config --cxxflags` `/home/sanghu/TracerX/llvm/Release/bin/llvm-config --ldflags` `/home/sanghu/TracerX/llvm/Release/bin/llvm-config --libs` -lpthread -lncurses -ldl
# Below code targets for all predicates
/home/sanghu/TracerX/llvm/Release/bin/llvm-dis ${BENCHMARK}.bc
valuepred=$(ls -v ../SequenceGenerator/exp/predicateResults* | wc -l)
for p in `seq 1 $valuepred`
do
cp ${BENCHMARK}.ll ${BENCHMARK}-$p-1.ll
let i=1
let j=0
for x in `ls -v ../SequenceGenerator/exp/Sequence-pred-$p-*`;  
do 
((j=i+1));
         ./markcond ${BENCHMARK}-$p-$i.ll $x 2> ${BENCHMARK}-$p-${j}.msg 1> ${BENCHMARK}-$p-${j}.ll
((i=i+1));
done
cp ${BENCHMARK}-$p-${j}.ll ${BENCHMARK}KAPPA-pred-$p.ll
done
rm ${BENCHMARK}-*-*.ll
rm *.msg
