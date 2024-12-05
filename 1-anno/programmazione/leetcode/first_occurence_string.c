#include<stdio.h>
#include<string.h>
//complexity O(n*m);
int check(){
  char* haystack = "mississipi";
  char* neeble = "issip";
  int size_neeble = strlen(neeble);
  int size_hay = strlen(haystack); 
  int i = 0 ,j = 0;
  for(; i < size_hay ;){
     if(haystack[i] == neeble[j]){
        if(j == size_neeble-1){
         return (i - size_neeble)+1;
        }
        j++;
        i++;
     }else{
       i = (i-j)+1;
       j = 0;
     }
  }
  return -1;
}

int main(){

  printf("%d", check());

}
