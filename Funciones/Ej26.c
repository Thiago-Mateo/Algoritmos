#include <stdio.h>
#include <stdlib.h>

//Metodo iterativ0
int suma(int n){
  int num = 0;
  for(int i = 1; i <= n; i++){
    num += i;
  }
  return num;
}

//Metodo recursiv0
int suma_r(int n){
  if(n == 0) return n;
  else return n + suma_r(n - 1);
}

//Metodo cerrad0

int suma_c(int n){
  return (n*(n+1)) / 2;
}

int main(int argc, char *argv[]){
  int n = atoi(argv[1]);
  int res = suma(n);
  int res_r = suma_r(n);
  int res_c = suma_c(n);
  printf("%d : %d : %d\n", res, res_r, res_c);
}
