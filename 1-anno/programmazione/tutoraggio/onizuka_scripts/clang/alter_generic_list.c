#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"dynamic_list_source/list.h"



list init_test_list(list l){
  l = append(l,new_element('i',NULL,1956,0));
  l = append(l,new_element('f',NULL,0,453.23));
  l = append(l,new_element('s',"python",0,0));
  l = append(l,new_element('i',NULL,2024,0));
  l = append(l,new_element('s',"java",0,0));
  l = append(l,new_element('f',NULL,0,8989.12));
  l = append(l,new_element('s',"koala",0,0));
  l = append(l,new_element('s',"ASM",0,0));
  l = append(l,new_element('s',"C",0,0));
  return l;
}

char* alter_string(char* s1,char* s2){
  int cmp = strcmp(s1,s2);//negativo se s1 e less minore di s2
  char* new_s = (char*) malloc(sizeof(char)*(strlen(s1)+strlen(s2)+1));
  if(new_s == NULL){
    printf("errore\n");
    exit(1);
  }
  if(cmp > 0){
    char* tmp = s1;
    s1 = s2;
    s2 = tmp;
  }
  int i=0;
  for(; s1[i] != '\0'; i++){
    new_s[i] = s1[i];
  }
  for(int j=0; s2[j] != '\0'; i++,j++){
    new_s[i] = s2[j];
  }
  
  return new_s;

}

int alter_list_string(list l,char* s){
  int count_mod = 0;
  for(int i=0; i < l.size; i++){
    if(l.elements[i].type == 's'){
      l.elements[i].data_pointer = alter_string(l.elements[i].data_pointer,s);
      count_mod++;
    }
  }

  print_lista(l);
  return count_mod;
}


int main(){
  list l = init();
  l = init_test_list(l);
  print_lista(l);
  char a[] = "linguaggio"; 
  printf("%d",alter_list_string(l,a));
  return 0;
}



