#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//Variables globales
int n = 0;
int size = 1;
int *stack;

//Operaciones de la pila
void push(int item){
  if (n == size) stack = realloc(stack, (size*=2)*sizeof(int));
  stack[n++] = item;
}

bool isempty(void){
  return(n == 0);
}

int pop(void){
  int item = stack[--n];
  stack[n] = 0;
  if (n > 0 && n == size/4) stack = realloc(stack, (size/=2)*sizeof(int));
  return item;
}

int main(void){

}
