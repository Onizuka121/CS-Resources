/*
1768. Merge Strings Alternately

You are given two strings word1 and word2. Merge the strings by adding letters in alternating order, starting with word1. If a string is longer than the other, append the additional letters onto the end of the merged string.

Return the merged string.
Example : 
  Input: word1 = "abc", word2 = "pqr"
  Output: "apbqcr"
  Explanation: The merged string will be merged as so:
  word1:  a   b   c
  word2:    p   q   r
  merged: a p b q c r
 */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char* mergeAlternately(char * word1, char * word2){
  int size_1 = strlen(word1);
  int size_2 = strlen(word2);
  char* new = (char*) malloc((size_1+size_2+1)*sizeof(char));
  int i = 0, j = 0, k = 0;
  while(i < size_1 && j < size_2){
    new[k] = word1[i];
    k++;
    new[k] = word2[j];
    i++;
    j++;
    k++;
  }
  if(i < size_1){
    j = i;
    size_1 = size_2; 
  }
  while(j < size_2){
      new[k] = word2[j];
      k++;
      j++;
    }
  new[k] = '\0';
  
  return new;
}

int main(){
  char* word1 = "a";
  char* word2 = "bb";
  char* merged = mergeAlternately(word1,word2);
  printf("%s\n",merged);
    free(merged);
}








