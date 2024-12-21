#include<stdio.h>
#include<string.h>
/*
  S =" M    C   M    X  C   I   V"
  A =[1000 100 1000 10 100  1   5]
      1000  0   900  0  90  0   4 = 1994 
 */

int roman_to_integer(char* s){
  int size = strlen(s);
    int a[size];
    for (int i = 0; s[i] != '\0'; i++) {
        switch (s[i]) {
        case 'I': a[i] = 1;
            break;
        case 'V': a[i] = 5;
            break;
        case 'X': a[i] = 10;
            break;
        case 'C': a[i] = 100;
            break;
        case 'M': a[i] = 1000;
            break;
        case 'L': a[i] = 50;
            break;
        case 'D': a[i] = 500;
            break;
        default:
            return -1;
        }
    }

    int out = 0;
    for (int i = 0; i < size - 1; i++) {
        if (a[i] < a[i + 1]) {
            a[i + 1] -= a[i];
            a[i] = 0;
        }
        out += a[i];
    }
    out += a[size-1];
  return out;
}

int main(){
  printf("%d\n",roman_to_integer("MCMXCIV"));
}






