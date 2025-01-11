#include<stdio.h>
#include<stdlib.h>




void print_array(int* a,int lx, int n){
  printf("{ ");
  for(int i=lx; i < n; i++)
    printf("%d ",a[i]);

  printf(" }\n");

}

void merge(int* a,int s0,int l0,int s1, int l1){
  int size = (l1-s0)+1;
  int temp[size];
  int i = 0, tmp_s0 = s0;
  while(s0 <= l0 && s1 <= l1){
    if(a[s0] < a[s1]){
      temp[i] = a[s0];
      s0++;
    }else if(a[s0] > a[s1]){
      temp[i] = a[s1];
      s1++;
    }else{
      temp[i] = a[s0];
      s0++;
    }
    i++;
  }
  
  while(s0 <= l0){
    temp[i] = a[s0];
    s0++;
    i++;
  }
  while(s1 <= l1){
    temp[i] = a[s1];
    s1++;
    i++;
  }
  //print_array(temp,0,size);
  for(int i=0; i < size; i++){
    a[i+tmp_s0] = temp[i];
  }

}


void merge_sort(int *a,int lx,int n){
  if(n > lx){
    int mid = (lx+n)/2;
    merge_sort(a,lx,mid);
    merge_sort(a,mid+1,n);
    merge(a,lx,mid,mid+1,n);
  }
}





