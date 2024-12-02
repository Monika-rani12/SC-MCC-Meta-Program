cp Supplementary-artifact-Programs/*.c .

./mainmcdc.sh Wtest22-B5 KLEE 1
./clean.sh
./mainmcdc.sh Wtest22-B5 TX 2
./clean.sh
./mainmcdc.sh Wtest22-B5 BMC 3
./clean.sh


./mainmcdc.sh Wtest23-B2 KLEE 1
./clean.sh
./mainmcdc.sh Wtest23-B2 TX 2
./clean.sh
./mainmcdc.sh Wtest23-B2 BMC 3
./clean.sh

./mainmcdc.sh Wtest27-B2 KLEE 1
./clean.sh
./mainmcdc.sh Wtest27-B2 TX 2
./clean.sh
./mainmcdc.sh Wtest27-B2 BMC 3
./clean.sh

./mainmcdc.sh Wtest7-B10 KLEE 1
./clean.sh
./mainmcdc.sh Wtest7-B10 TX 2
./clean.sh
./mainmcdc.sh Wtest7-B10 BMC 3
./clean.sh


./mainmcdc.sh Prob1-IO-R14-B2 KLEE 1
./clean.sh
./mainmcdc.sh Prob1-IO-R14-B2 TX 2
./clean.sh
./mainmcdc.sh Prob1-IO-R14-B2 BMC 3
./clean.sh


./mainmcdc.sh Prob1-IO-R14-B3 KLEE 1
./clean.sh
./mainmcdc.sh Prob1-IO-R14-B3 TX 2
./clean.sh
./mainmcdc.sh Prob1-IO-R14-B3 BMC 3
./clean.sh

./mainmcdc.sh Prob1-IO-R14-B4 KLEE 1
./clean.sh
./mainmcdc.sh Prob1-IO-R14-B4 TX 2
./clean.sh
./mainmcdc.sh Prob1-IO-R14-B4 BMC 3
./clean.sh

./mainmcdc.sh Prob2-IO-R14-B2 KLEE 1
./clean.sh
./mainmcdc.sh Prob2-IO-R14-B2 TX 2
./clean.sh
./mainmcdc.sh Prob2-IO-R14-B2 BMC 3
./clean.sh

./mainmcdc.sh Prob16-R12-B3 KLEE 1
./clean.sh
./mainmcdc.sh Prob16-R12-B3 TX 2
./clean.sh
./mainmcdc.sh Prob16-R12-B3 BMC 3
./clean.sh

rm -r *.c

