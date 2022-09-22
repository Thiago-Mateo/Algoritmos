#include <stdio.h>
#include <stdlib.h>

//version recursiva
int fact_r(int n){
  if(n == 0) return 1;//caso base
  return n * fact_r(n - 1);//caso reductivo/
}

//version iterativa
int fact(int n){
  int result = 1;
  for(int i = 2; i < n=; i++){
    result *= i;
  }
  return result;
}

int main(int argc, char *argv[]){
  int n = atoi(argv[1]);
  
}
