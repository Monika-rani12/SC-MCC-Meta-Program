#Written by Sangharatna Godboley
#This shell script compiles and run "MCDC_Sequence_Generator.java", "Seq_For_Pred.java", and "SequenceFileGenerator.java" for a C program. "MCDC_Sequence_Generator.java" takes a C program and identifies atomic conditions and predicates and produces "Seq_For_Pred.java" which consists of all predicates with temporary variables such as A, B, and C for each conditions etc. Then, "Seq_For_Pred.java" produces all tables and finally MC/DC sequences for all predicates. To write truth values in terms of "1" for true, "0" for false, and "9" for don't care (x), we run "SequenceFileGenerator.java". This "SequenceFileGenerator.java" will also includes the truth values of each atomic conditions as well as all truth values of predicates. Finally, we get the total possible sequence (feasible and in feasible) according to MC/DC criterion, now we can supply them into "condition marker algorithm".
export BENCHMARK=$1
export TOOL=$2

javac MCDC_Sequence_Generator_multiple_mcdc.java
java MCDC_Sequence_Generator_multiple_mcdc "benchmarks/$1"

mkdir "exp/meta" 2> err.txt
javac SequenceFileGenerator.java
java SequenceFileGenerator $1

rm -f error*
rm -f $BENCHMARK.c

