#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void Logo(int canvas[20][20], char* commands[], int d){

  for(int i=0; i<20; i++){
    for(int j=0; j<20; j++){
      canvas[i][j] = 0;
      printf("%d",canvas[i][j]);
    }
    printf("\n");
  }

  int x = 0,y = 0;
  for(int i=0; i < d; i++){
    int movex = 0, movey = 0;
    if(commands[i][0] == 'G'){
        int tmp_x = x, tmp_y = y;
        sscanf(&(commands[i][1]),"%d,%d",&x,&y);
        if((!(x >= 0 && x <= 19) || !(y >= 0 && y <= 19))){
          x = tmp_x;
          y = tmp_y;
        }
    }else if(commands[i][0] == 'S'){
        sscanf(&(commands[i][1]),"%d",&movey);
        if(y+movey < 20){
          for(int i = y; i <= (y+movey); i++){
            canvas[i][x] = 1;
          }
          y = y+movey;
        }
    }else if(commands[i][0] == 'N'){
        sscanf(&(commands[i][1]),"%d",&movey);
        if(y-movey >= 0){
          for(int i = y; i >= (y-movey); i--){
            canvas[i][x] = 1;
          }
          y = y-movey;
        }

    }else if(commands[i][0] == 'W'){
       sscanf(&(commands[i][1]),"%d",&movex);
        if(x-movex >= 0){
          for(int i = x; i >= (x-movex); i--){
            canvas[y][i] = 1;
          }
          x = x-movex;
        }
 
    }else if(commands[i][0] == 'E'){
        sscanf(&(commands[i][1]),"%d",&movex);
        if(x+movex < 20){
          for(int i = x; i <= (x+movex); i++){
            canvas[y][i] = 1;
          }
          x = x+movex;
        }
      } 
    }

   for(int i=0; i<20; i++){
    for(int j=0; j<20; j++){
      printf("%d",canvas[i][j]);
    }
    printf("\n");
  }
  }

int main(){
  char* cmds[] = {"G2,2", "S6", "E6", "N6", "W6" , "G4,10", "W12" ,"G20,2","N6", "E10", "S6","W10"}; 
  int c[20][20];
  Logo(c,cmds,sizeof(cmds)/sizeof(char*));
}
