#include<stdio.h>



void print_matrix(int[][2],int);

int check_vicotory(int moves[][2],int a){
  int count_xy[3][2] = {{0,0},{0,0},{0,0}};

  for(int i=0; i<a;i++){
        count_xy[moves[i][0]][0]++;
        count_xy[moves[i][1]][1]++;
    }
  
    for(int i=0; i<3;i++){
        if(count_xy[i][0] == 3 || count_xy[i][1] == 3){
          return 1;
        }
    }
    printf("\ncount ->\n");
    print_matrix(count_xy,3);

    for(int i=0; i<3;i++){
        count_xy[i][0] = 0;
        count_xy[i][1] = 0;
    }

    for(int i=0; i<a;i++){
      if((moves[i][0]+moves[i][1]) % 2 == 0){
        count_xy[moves[i][0]][0]++;
        count_xy[moves[i][1]][1]++;
      }
    }
    printf("\n2 count -> \n");
    print_matrix(count_xy,3);

    int count = 0;
    for(int i=0; i<3;i++){
        if(count_xy[i][0] >=1 && count_xy[i][1] >= 1){
          count++;
        }
        if(count == 3){
          return 1;
        }
    }

  return 0;
}

char* check_victory_tris(int moves[][2],int movesSize,int* movesColSize){

  int moves_A[movesSize][2];
  int moves_B[movesSize][2];
  int a = 0;
  int b = 0;

  int insert_a = 1;
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

  int v_A = check_vicotory(moves_A,a);
  int v_B = check_vicotory(moves_B,b);

  if(v_A > v_B){
    return "A wins";
  }

  if(v_A < v_B){
    return "B wins";
  }

  if(movesSize >= 9){
    return "Draw";
  }

  return "Pending..";
}

void print_matrix(int m[][2],int size){
  for(int i=0;i<size;i++){
    printf("%d , %d\n",m[i][0],m[i][1]);
  }
}


int main(){
  int moves[][2] = {{0,0},{1,1},{0,1},{0,2},{1,0},{2,0}};
  int movesSizeCol[] = {} ;
  printf("%s\n",check_victory_tris(moves,6,movesSizeCol)); 
  return 0;
}
