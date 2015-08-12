#!/bin/bash
for i in $(seq 1 10000); 
do 
   # echo $i; 
    ./../GenerisiBroj/Debug/GenerisiBroj > ulaz.txt;
    ./../IspisiBroj/Debug/IspisiBroj < ulaz.txt > izlaz1.txt;
    ./../IspisiBroj2/Debug/IspisiBroj2 < ulaz.txt > izlaz2.txt;
    diff -u izlaz1.txt izlaz2.txt > razlike.txt;
    if  [ -s razlike.txt ]
    then
	echo $i;
	break;
    fi;	
done

