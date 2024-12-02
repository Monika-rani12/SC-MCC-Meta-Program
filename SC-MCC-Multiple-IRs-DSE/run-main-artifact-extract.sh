
./extract.sh PS-P1-L-R20-B50 TX 1

./extract.sh PS-P1-L-R20-B100 TX 1


#Collect all the summary files
rm collect-artifact.csv
mkdir Main-artifact-recent
./collect.sh collect-artifact.csv
rm Main-artifact-recent/collect-artifact.csv
mv collect-artifact.csv Main-artifact-recent
