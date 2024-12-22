#! /bin/bash

touch $1.c;

echo "#include<stdio.h>" > $1.c
echo "#include<stdlib.h>" >> $1.c
echo " " >> $1.c
echo " " >> $1.c
echo " " >> $1.c
echo "int main(int argc, char* argv[]){" >> $1.c 
echo " " >> $1.c
echo " " >> $1.c
echo "return 0;" >> $1.c
echo "}" >> $1.c

nvim $1.c
