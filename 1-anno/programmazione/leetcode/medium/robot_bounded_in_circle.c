#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char* reverse_string(char* s){
  int size_s = strlen(s);
  char* rev = (char*) malloc(sizeof(char)*(size_s+1));
  for(int i = size_s-1; i >= 0; i--)
    rev[(size_s-1)-i] = s[i];

  return rev;
}

int isRobotBounded(char* instructions){
  int size_inst = strlen(instructions);
  char* new = (char*) malloc(sizeof(char)*((size_inst)+1));
  for(int i=0; i < size_inst; i++)
        new[i] = instructions[i];

/*  char* rev = reverse_string(instructions);
  for(int i=size_inst,j=0; i < size_inst*2; i++,j++){
    new[i] = rev[j];
  }*/
  
  new[size_inst] = '\0';

  printf("new intructions -> %s\n",new);
  int degree = 90;
  int x = 0;
  int y = 0;
  int i = 0;
  while(new[i] != '\0'){
    if(new[i] == 'L'){
      degree += 90;
    }else if(new[i] == 'R'){
      degree -= 90;
    }
    if(degree < 0){
      degree = 360 + degree;
    }
    if(new[i] == 'G'){
      if(degree == 90)//north
        y++;
      else if(degree == 180)//west
        x--;
      else if(degree == 270)
        y--;
      else if(degree == 360 || degree == 0)
        x++;

      printf("(%d,%d)\n",x,y);
    }
    if(x == 0 && y == 0 && i == size_inst-1){
      printf("CIRCLE");  
      return 1;
      }
    if(degree == 360)
      degree = 0;
    
    i++;
 }


 printf("degree -> %d\n",degree);

  if(degree == 90){
    i = 0;
    while(new[i] != '\0' && new[i] != 'G'){
       if(new[i] == 'L'){
          degree += 90;
        }else if(new[i] == 'R'){
          degree -= 90;
        }
       if(degree < 0){
         degree  = 360 + degree;
       }
       if(degree == 360){
         degree = 0;
       }
       i++;
    }
  }

  printf("degree -> %d\n",degree);
  if(degree == 180 || degree == 0 || degree == 360 || (degree == 270 && x == 0) || (degree == 270 && y == 0)){
    printf("CIRCLE");
    return 1;
  }
 
  return 0;
}

int main(){
  char* intructions = "LGR";
  isRobotBounded(intructions);
  return 0;
}



