#include<stdio.h>


//funzione che ritorna il tipo da una stringa buf che viene letta da tastiera
//questo approccio ci permetterà di inserire elementi in una lista generica
char get_type(char* buf){
    int tmp_int;
    float tmp_float;
    if(sscanf(buf,"%f",&tmp_float) || sscanf(buf,"%d",&tmp_int)){ //14.012
        int i = 0, n_p = 0;
        while(buf[i] != '\0'){
          if(buf[i] == '.'){
            n_p++;
            if(n_p > 1)
              return 's';
          }else if(buf[i] < '0' || buf[i] > '9')
            return 's';
          i++;
        }
        if(n_p == 1){
          return 'f';
        }
      return 'i';    
    }
  return 's';
}


int main(){
    char buf[1024];
    scanf("%s",buf);
    printf("%c\n",get_type(buf));
}




