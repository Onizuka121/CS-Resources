#include<stdio.h>
#include<string.h>

// "Hello World "

int lengthOfLastWord(char* s) {
  int last_character = strlen(s)-1;
  if(last_character > 0){
    while (s[last_character] == ' '){
      last_character--;
    }
  }
  int i = last_character;
  for(; i >= 0 && s[i] != ' '; i--); 
  return last_character - i;
}

int main(){
  printf("%d\n",lengthOfLastWord("H"));
  return 0;
}
