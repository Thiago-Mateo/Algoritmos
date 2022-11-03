#include <stdio.h>
#include <stdlib.h>

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

bool esta_balanceado(char *s){
  int i = 0;
  while(s[i] != 0){
    if(s[i] == ')'){
      char c = pop();
      if(c != '(') return false;
    } else {
      push(s[i]);
    }
    i++;
  }
  if(!isempty()) return false;
  return true;
}

int main(int argc, char *argv[]) {
  printf("%s\n", esta_balanceado(argv[1]) ? "Si lo esta" : "No lo esta");
  return 0;
}
