#!/bin/bash

if [ -z $1 ]; then
 	echo "Utilizzo: bash $0 <name folder>"
	exit 1
fi 

c=0

for subject in 'programmazione' 'logica-e-reti-logiche' 'matematica-discreta' 'analisi-matematica'
do
	cd $subject 
	if [ $? -eq 0 ]; then
	  mkdir $1
	  c=$(($c+1))
          cd ..
	fi
done

echo "[+] $c folders created for each subject"

