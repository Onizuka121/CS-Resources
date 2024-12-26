#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char* m = malloc(strlen(strs[0]) + 1); 
    strcpy(m, strs[0]);
    int size_m = strlen(m);
    for(int i=1; i < strsSize; i++){
        int j = 0;
        for(int k = 0; j < size_m && strs[i][k] != '\0' && m[j] == strs[i][k]; j++, k++);
        m[j] = '\0';
    }

    printf("%s",m);
}
