#include"merge_sort.h"

int main(){
  int a[] = {2,3,1,2,7,10,3,2,-4,8,8,12,-1,5,3};
  merge_sort(a,0,(sizeof(a)/sizeof(int))-1);
  print_array(a,0,sizeof(a)/sizeof(int));
  
  return 0;
}
