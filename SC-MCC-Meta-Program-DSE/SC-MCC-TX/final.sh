export BENCHMARK=$1
export tool=$2
export toolnumber=$3
let s=1
let r=1
for x in `ls -v result-$BENCHMARK-$tool-$toolnumber/*-report.txt`; 
do  
    for y in `ls -v result-$BENCHMARK-$tool-$toolnumber/timeTx-*`; 
    do  
    cat $x $y > result-$BENCHMARK-$tool-$toolnumber/final.txt
    ((s =s+1));
    done    
    ((r =r+1));
done
