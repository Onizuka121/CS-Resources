#include<stdio.h>
typedef int bool;
/*
 6 , 6 , 5 , 2 , 1 

 1 , 2, 3 , 4 , 5
 */

bool is_monotonic(int* nums, int numsSize){
  int i = 0;
  while(i < numsSize-1 && nums[i] >= nums[i+1]){
    i++;
  }
  if (i == numsSize-1){
      return 1;
  }
  i = 0;
  while(i < numsSize-1 && nums[i] <= nums[i+1]){
    i++;
  }
  return i == numsSize-1;
}

int main(){
  int a[] = {1,2,3,4,5,6,7,8,9};
  printf("%d\n",is_monotonic(a,sizeof(a)/sizeof(int)));
  
  return 0;
}
