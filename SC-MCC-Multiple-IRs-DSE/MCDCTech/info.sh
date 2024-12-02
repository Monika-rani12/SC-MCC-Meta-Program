#!/bin/ksh
export BENCHMARK=$1
mkdir condition-marker/info
mkdir condition-marker/messages
mkdir condition-marker/spec
let s=1
let r=1
let t=1

for x in `ls -v condition-marker/klee-out-*/info`; 
do  
    cp $x condition-marker/info/info$s
    ((s =s+1));
done
for x in `ls -v condition-marker/klee-out-*/messages.txt`; 
do  
    cp $x condition-marker/messages/messages$r.txt
    sort condition-marker/messages/messages$r.txt | uniq >> condition-marker/messagesinfo.txt
    ((r =r+1));
done
for x in `ls -v condition-marker/klee-out-*/spec.txt`; 
do  
    cp $x condition-marker/spec/spec$t.txt
    ((t =t+1));
done


