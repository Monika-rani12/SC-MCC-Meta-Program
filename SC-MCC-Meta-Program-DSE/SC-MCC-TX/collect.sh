for f1 in result-*/Summary-*.csv
do
   echo $f1 >> collect-artifact.csv
   cat $f1 >> collect-artifact.csv   
done
