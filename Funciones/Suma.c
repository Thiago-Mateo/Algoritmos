#include <stdio.h>
#include <stdlib.h>

//forma recursiva
int sum_r(int n){
  if(n == 0) return 0;
  return n + sum_r(n - 1);
}
//forma iterativa
int sum(int n){
  int num = 0;
  for(int i = 1; i <= n; i++){
    num += i;
  }
  return num;
}

int main(int argc, char *argv[]){
  int n = atoi(argv[1]);
  int num_r = sum_r(n);
  int num = sum(n);
  printf("%d : %d\n", num_r, num);
}
