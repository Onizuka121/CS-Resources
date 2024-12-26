#include<stdio.h>
#include<string.h>

char* toLowerCase(char* s) {
  for(int i=0;s[i] != '\0'; i++){
    if(s[i] < 'a'){
        s[i] = s[i]+32;
    }
  }

  return s;
}

int main(){
  char s[] = "Hello";
  printf("%s\n",toLowerCase(s));
  return 0;
}
