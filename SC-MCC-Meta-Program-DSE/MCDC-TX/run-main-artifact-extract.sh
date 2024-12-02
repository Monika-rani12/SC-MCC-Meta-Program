./extract.sh P1-A-R14 TX 2
./extract.sh P1-L-R16 TX 2
./extract.sh P1-L-R18 TX 2
./extract.sh P1-L-R19 TX 2
./extract.sh P1-L-R20 TX 2
./extract.sh P1-L-T-R16 TX 2
./extract.sh P1-L-T-R19 TX 2
./extract.sh P1-L-T-R20 TX 2
./extract.sh P1-NT-R14 TX 2
./extract.sh P1-WB-R15 TX 2
./extract.sh P1-WB-T-R15 TX 2
./extract.sh P2-A-R14 TX 2
./extract.sh P2-L-R16 TX 2
./extract.sh P2-L-R18 TX 2
./extract.sh P2-L-T-R19 TX 2
./extract.sh P2-NT-R14 TX 2
./extract.sh P3-L-T-R19 TX 2
./extract.sh P3-L-T-R20 TX 2
./extract.sh P3-R-T-R16 TX 2
./extract.sh P4-A-R14 TX 2
./extract.sh P5-L-T-R16 TX 2
./extract.sh P6-L-T-R16 TX 2
./extract.sh P7-L-T-R16 TX 2
./extract.sh P8-L-T-R16 TX 2
./extract.sh P10-L-T-R16 TX 2
./extract.sh P10-R16 TX 2
./extract.sh P10-R-R18 TX 2
./extract.sh P11-R-R18 TX 2
./extract.sh P11-R-R19 TX 2
./extract.sh P11-R-R20 TX 2
./extract.sh P11-R-T-R16 TX 2
./extract.sh P11-R-T-R19 TX 2
./extract.sh P12-R-R19 TX 2
./extract.sh P12-R-R20 TX 2
./extract.sh P12-R-T-R16 TX 2
./extract.sh P13-R-R20 TX 2
./extract.sh P14-R-R19 TX 2
./extract.sh P14-R-R20 TX 2

#Collect all the summary files
rm collect-artifact.csv
mkdir Main-artifact-recent
./collect.sh collect-artifact.csv
rm Main-artifact-recent/collect-artifact.csv
mv collect-artifact.csv Main-artifact-recent
