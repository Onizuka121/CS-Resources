#include<stdio.h>
#include<string.h>
/*
 * mosse : U (UP) , D (DOWN) , L (LEFT), R (RIGHT)
 Input: moves = "UD"
Output: true
Explanation: The robot moves up once, and then down once. All moves have the same magnitude, so it ended up at the origin where it started. Therefore, we return true.
 */

int judgeCircle(char* moves) {
    int x = 0,y = 0;
    int size = strlen(moves);
    for(int i=0; i < size; i++){
      if(moves[i] == 'U'){
        y++;
      }else if(moves[i] == 'D'){
        y--;
      }else if(moves[i] == 'L'){
        x--;
      }else if(moves[i] == 'R'){
        x++;
      }
    }

    return x == 0 && y == 0;
    
}

int main(){
  
  printf("%d\n",judgeCircle("LL"));
  
  return 0;
}
