#include<stdio.h>
#include<string.h>
#include<stdlib.h>
/*
Input: ops = ["5","2","C","D","+"]
Output: 30
Explanation:
"5" - Add 5 to the record, record is now [5].
"2" - Add 2 to the record, record is now [5, 2].
"C" - Invalidate and remove the previous score, record is now [5].
"D" - Add 2 * 5 = 10 to the record, record is now [5, 10].
"+" - Add 5 + 10 = 15 to the record, record is now [5, 10, 15].
The total sum is 5 + 10 + 15 = 30.
[12,0,0,0,0]
*/
int calPoints(char** operations, int operationsSize) {
  int* record = malloc(sizeof(int)*operationsSize);
  int rec = 0;
  for(int i=0; i < operationsSize; i++){
    record[i] = 0;
  }// 0 , 0 , 0 , 0
  for(int i=0; i < operationsSize; i++){
    if(strcmp(operations[i],"C") == 0){
      rec--;
      record[rec] = 0;
    }else if(strcmp(operations[i],"D") == 0){
      record[rec] = record[rec-1]*2;
      rec++;
    }else if(strcmp(operations[i],"+") == 0){
      record[rec] = record[rec-2]+record[rec-1];
      rec ++;
    }else{
      record[rec] = atoi(operations[i]);
      rec++;
    }
  }

  printf("{");
  int out = 0;
  for(int i=0; i < operationsSize; i++){
    printf("%d ",record[i]);
    out += record[i];
  }

  printf("}\n");
    
  return out;
}
int main(){//5 -2 -4 9 0 0 0 0 0 
  char* operations[] = {"5","-2","4","C","D","9","+","+"};
  printf("\n%d\n",calPoints(operations,8));
  return 0;
}





