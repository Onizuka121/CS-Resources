#include<stdio.h>
#define ASCII_CONST 48
int time_to_int(char* time,int index){ // index potra essere o 0 o 3 
  int time_int = 0;
  int u1 = time[index] - ASCII_CONST;
  time_int = time[index+1] - ASCII_CONST;
  if(u1 > 0){
    u1 *= 10;
    time_int = u1 + time_int;
  }
  return time_int;
}

int main(int argc , char** argv){
  char* current = "11:00";
  int current_int[] = {time_to_int(current,0),time_to_int(current,3)};
  char* correct = "11:01";
  int correct_int[] = {time_to_int(correct,0),time_to_int(correct,3)};

  if(current_int[0] > correct_int[0]){
    correct_int[0] += 24;
  }
  
  int total_minutes = ((correct_int[0]*60)+correct_int[1])-((current_int[0]*60)+current_int[1]);
  
  int c = 0;

  while(total_minutes > 0){
    if(total_minutes >= 1 && total_minutes < 5){
      total_minutes -= 1;
    }else if(total_minutes >= 5 && total_minutes < 15){
      total_minutes -= 5;
    }else if(total_minutes >= 15 && total_minutes < 60){
      total_minutes = total_minutes - 15;
    }else {
      total_minutes -= 60;
    }
    c++;
  }

  printf("count : %d",c);


}






