#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct queue_list_str{
  char** data;
  int size;
  int capacity;
  int head;
}queue_list_str;

queue_list_str init_queue_list_str(){
  queue_list_str new = {NULL,0,0,0};
  return new;
}

queue_list_str enqueue(queue_list_str qs,char* s){
  if(qs.size == qs.capacity){
    qs.capacity = (qs.capacity+1)*2;
    //ora dobbiamo copiare tutto il nuovo array con le posizione corrette 
    //perche magari la testa è in mezzo all'array e quindi un semplice realloc non 
    //gestirebbe bene sta robba
    //il fatto che dobbiamo riordinare (risettare) l'ordine giusto quindi che la testa si ritrovi in 0 etc
    char** new_data = malloc(qs.capacity*sizeof(char*));
    for(int i=0; i < qs.size; i++){
      //qui facciamo qs.size perche dobbiamo cpiare tutti gli elementi validi
      //e rispettando l'ordine circolare 
      new_data[i] = qs.data[(qs.head+i)%qs.size];
    }
    //ora liberiamo la memoria dal vecchio array e assegnamo alla struttura il nuovo array settato per bene
    free(qs.data);
    qs.data = new_data;
    //ora la testa è a 0
    qs.head = 0;
  }

  qs.data[(qs.head+qs.size)%qs.capacity] = s;
  qs.size++;

  return qs;

}

queue_list_str dequeue(queue_list_str qs){
  if(qs.size > 0){

    //free(qs.data[qs.head]);

    qs.head = (qs.head+1)%qs.capacity;
    qs.size--;
    //se ho la capacity troppo grossa (4 volte piu grande)
    if(qs.size < qs.capacity/4){
      printf("sd");
      qs.capacity = qs.capacity/2;
      char** new_data = malloc(qs.capacity*sizeof(char*));
      for(int i=0; i < qs.size; i++){
      //qui facciamo qs.size perche dobbiamo cpiare tutti gli elementi validi
      //e rispettando l'ordine circolare
      //attenzione che qui dobbiamo utilizzare la vecchia capacity (ovvero *2) 
      //perche gli indici degli elementi del vecchio array si basavano su questa vecchia capacity
        new_data[i] = qs.data[(qs.head+i)%(qs.capacity*2)];
      }
      
      free(qs.data);
      qs.data = new_data;
      qs.head = 0;
    }
  }

  return qs;
}


void print_queue_list_str(queue_list_str qs){
  printf("queue list string : { ");
  for(int i=0; i < qs.size; i++){
    printf("%s , ",qs.data[(qs.head+i)%qs.capacity]);
  }
  printf("}\n");
}

int main(int argc, char* argv[]){
  queue_list_str qs = init_queue_list_str();
  
  for(int i=1; i < argc; i++){
    qs = enqueue(qs,argv[i]);
  }
  print_queue_list_str(qs);
  for(int i=1; i < argc-2; i++){
  qs = dequeue(qs);
  print_queue_list_str(qs);
  }

  return 0;
}



