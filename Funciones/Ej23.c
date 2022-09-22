#include <stdio.h>
#include <stdlib.h>

//Iterativa
int mcd(int a, int b){
  int t = 0;
  while(b != 0){
    t = b;
    b = a % b;
    a = t;
  }
  return a;
}

//Recursiva
int mcd_r(int a, int b){
  if(b == 0) return a;
  else return mcd_r(b, a % b);
}

int main(int argc, char *argv[]){
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  int res = mcd(a, b);
  printf("Forma iterativa: %d\n", res);
  int res_r = mcd_r(a, b);
  printf("Forma recursiva: %d\n", res_r);
}
