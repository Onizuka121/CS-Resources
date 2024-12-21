#include <features.h>
#include<stdio.h>
/* 
Given a sorted array of distinct integers and a target value, 
return the index if the target is found. 
If not, return the index where it would be if it were inserted in order.

You must write an algorithm with O(log n) runtime complexity. 

Example:
  Input: nums = [1,3,5,6], target = 5
  Output: 2 

*/

int searchInsert(int* nums,int numsSize,int target){
  int lx = 0, rx = numsSize - 1;
  while (lx < rx) {
    int mid = (lx+rx)/2;
    if(target > nums[mid]){
      lx = mid + 1;
    }else if(target < nums[mid]){
      rx = mid - 1;
    }else{
      return mid;
    }
  }
    printf("lx rx : %d %d\n",lx,rx);
    if(nums[lx] == target){
        return lx;
    }
    if(nums[lx] < target){
         return lx+1;
    }else{
      return lx;
    }
    return -1;
}

int main(){
      int a[] = {1,3,5,6};
      printf("%d\n",searchInsert(a,sizeof(a)/sizeof(int),2));
}

