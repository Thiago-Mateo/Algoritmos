#include <stdio.h>
#include <stdlib.h>

int potencia(int n){
  int num = 1;
  for(int i = 0; i < n; i++){
    num *= 2;
  }
  return num;
}

int main(int argc, char *argv[]){
  int n = atoi(argv[1]);
  int num = potencia(n);
  printf("2 Elevado a la %d da %d\n", n, num);
}
