#include<stdio.h>
#include<stdlib.h>



void first_char_maiuscolo(char* s){
  int i = 0;
  while(s[i] != '\0'){
    if((i-1 < 0 || (i-1 >= 0 && s[i-1] == ' ')) && s[i] >= 'a' && s[i] <= 'z'){
      s[i] = s[i] - ('a'-'A');
    }else if(s[i] >= 'A' && s[i] <= 'Z'){
      s[i] = s[i] + ('a'-'A');
    }
    i++;
  }

  printf("%s\n",s);
}


