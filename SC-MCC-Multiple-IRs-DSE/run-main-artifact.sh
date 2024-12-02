
./mainmcdc.sh PS-P1-L-R20-B50 TX 1
./clean.sh
./mainmcdc.sh PS-P1-L-R20-B100 TX 1
./clean.sh


rm -r *.c

cd ../../Documents/SC-MCC-DSE-Arrays
./run-all-main-artifact.sh


