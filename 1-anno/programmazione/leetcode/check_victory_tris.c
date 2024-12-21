#include<stdio.h>


void print_matrix(int[][2],int);


char* check_victory_tris(int moves[][2],int movesSize){
  int moves_A[movesSize][2];
  int moves_B[movesSize][2];
  int a = 0;
  int b = 0;
  int insert_a = 1;
  int count_xy[3][2];
  for(int i=0; i < movesSize;i++){
    if(insert_a){
      moves_A[a][0] = moves[i][0];
      moves_A[a][1] = moves[i][1];
      a++;
      insert_a = 0;
    }else{
      moves_B[b][0] = moves[i][0];
      moves_B[b][1] = moves[i][1];
      b++;
      insert_a = 1;
    }
  }
  
   for(int i=0; i<a;i++){
        count_xy[moves_A[i][0]][0]++;
        count_xy[moves_A[i][1]][1]++;
    }

    for(int i=0; i<3;i++){
      for(int j=0;i<2;j++){
        if(count_xy[i][j] == 3){
          return "A wins";
        }
      }
    }
    
  


  printf("A : -> \n");
  print_matrix(moves_A,movesSize);
  printf("counting A : -> \n");
  print_matrix(count_xy,3);
  
  return "Pending..";
}

void print_matrix(int m[][2],int size){
  for(int i=0;i<size;i++){
    printf("%d , %d\n",m[i][0],m[i][1]);
  }
}





int main(){
  int moves[][2] = {{0,0},{0,1},{0,1},{0,2},{1,0},{2,0}};
  printf("%s\n",check_victory_tris(moves,6)); 
  return 0;
}
