#include<stdio.h>
#include<stdbool.h>

struct Item{
  int data;
  struct Item* next;
  struct Item* prev;
};

typedef struct{
 int size;
  struct Item* last;
  struct Item* first;
} dequeue;

void Create(dequeue *d){
  d->last=d->first=malloc(sizeof(struct Item));
  s->size=0;
}

bool Empty(dequeue *d){
  if(d->last==d->first)
    return d;
}

int main(){


return 0;}
