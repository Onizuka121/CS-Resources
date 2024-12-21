#include<stdio.h>
#include"dynamic_list_source/list.h"
#include"helper.h"

list array_union(int* a,int* b,int size_a,int size_b){
  list l = init();
  int i=0,j=0;
  for(;i < size_a && j < size_b; ){
    printf("%d -- %d\n", i, j);
    if(i > 0 && a[i] == *((int*)l.elements[l.size-1].data_pointer)){
      i++;
      continue;
    }if(j > 0 && b[j] == *((int*)l.elements[l.size-1].data_pointer)){
      j++;
      continue;
    }
      int n_to_app = a[i];
       if(a[i] < b[j]){
          n_to_app = a[i];
          i++;
       }else if(a[i] > b[j]){
          n_to_app = b[j];
          j++;
       }else{
         i++;
         j++;
       }
       l = append(l,new_element('i',NULL,n_to_app,0));
    
  }
  
  for(;j<size_b;j++){
    if(b[i] != *((int*)l.elements[l.size-1].data_pointer)) 
     l = append(l,new_element('i',NULL,b[j],0));
  }

  for(;i<size_a;i++){
    if(a[i] != *((int*)l.elements[l.size-1].data_pointer))  
      l = append(l,new_element('i',NULL,a[i],0));
  }

  return l;
}


list array_intersection(int* a, int* b, int size_a, int size_b){
  list l = init();
  int i=0 , j=0;
  for(;i < size_a && j < size_b; ){
    printf("%d -- %d\n", i, j);
    if(i > 0 && l.size > 0 && a[i] == *((int*)l.elements[l.size-1].data_pointer)){
      i++;
      continue;
    }if(j > 0 && l.size > 0 && b[j] == *((int*)l.elements[l.size-1].data_pointer)){
      j++;
      continue;
    }
    if(a[i] == b[j]){
      l = append(l, new_element('i',NULL,a[i],0));
      i++;
      j++;
    }else if(a[i] > b[j]){
      j++;
    }else{
      i++;
    }
   }


  return l;

}


int main(){// 0 , 1 , 
  int a[] = {2, 2, 6, 8, 8, 8, 8, 10,10, 12, 13};
  int b[] = {0, 0, 0, 1, 2, 3, 4, 5, 6, 13, 14,14,14,14};
  int size_a = sizeof(a)/sizeof(int);
  int size_b = sizeof(b)/sizeof(int);
/*  print_int_array(a,size_a);
   print_int_array(b,size_b);
  list o = array_union(a,b,size_a,size_b);*/   
  list o = array_intersection(a,b,size_a,size_b);
  print_lista(o);
}
