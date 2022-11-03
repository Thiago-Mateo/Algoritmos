#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


typedef struct node {
  char value;
  struct node *next;
} node;
//primer elemento de la pila (head de la ll)
node *stack = NULL;

void push(int item){
  node *t = stack;
  stack = malloc(sizeof(node));
  stack->value = item;
  stack->next = t;
}

int pop(void){
  int val = stack->value;
  node *t = stack;
  stack = stack->next;
  free(t);
  return val;
}

bool isempty(){
  return stack == NULL ? true : false;
}

void printstack(void){
  for(node *x = stack; x != NULL; x = x->next){
    printf("%d ", x->value);
  }
  printf("\n");
}

int main(int argc, char *argv[]){
  push(5);
  push(1);
  push(5);
  printstack();
  pop();
  printstack();
}
