./extract.sh Wtest22-B5 KLEE 1
./extract.sh Wtest22-B5 TX 2
./extract.sh Wtest22-B5 BMC 3


./extract.sh Wtest23-B2 KLEE 1
./extract.sh Wtest23-B2 TX 2
./extract.sh Wtest23-B2 BMC 3

./extract.sh Wtest27-B2 KLEE 1
./extract.sh Wtest27-B2 TX 2
./extract.sh Wtest27-B2 BMC 3

./extract.sh Wtest7-B10 KLEE 1
./extract.sh Wtest7-B10 TX 2
./extract.sh Wtest7-B10 BMC 3


./extract.sh Prob1-IO-R14-B2 KLEE 1
./extract.sh Prob1-IO-R14-B2 TX 2
./extract.sh Prob1-IO-R14-B2 BMC 3


./extract.sh Prob1-IO-R14-B3 KLEE 1
./extract.sh Prob1-IO-R14-B3 TX 2
./extract.sh Prob1-IO-R14-B3 BMC 3

./extract.sh Prob1-IO-R14-B4 KLEE 1
./extract.sh Prob1-IO-R14-B4 TX 2
./extract.sh Prob1-IO-R14-B4 BMC 3


./extract.sh Prob1-IO-R14-B5 KLEE 1
./extract.sh Prob1-IO-R14-B5 TX 2
./extract.sh Prob1-IO-R14-B5 BMC 3

./extract.sh Prob2-IO-R14-B2 KLEE 1
./extract.sh Prob2-IO-R14-B2 TX 2
./extract.sh Prob2-IO-R14-B2 BMC 3

./extract.sh Prob16-R12-B3 KLEE 1
./extract.sh Prob16-R12-B3 TX 2
./extract.sh Prob16-R12-B3 BMC 3

#Collect all the summary files
rm collect-artifact.csv
mkdir Suppl-artifact-recent
./collect.sh collect-artifact.csv
rm Suppl-artifact-recent/collect-artifact.csv
mv collect-artifact.csv Suppl-artifact-recent

