#include <stdio.h>
#include <stdlib.h>

int potencia(int b, int n){
  int t = b;
  if(n == 0) return 1;
  else for(int i = 1; i < n; i++){
    b = b * t;
  }
  return b;
}

int main(int argc, char *argv[]){
  int b = atoi(argv[1]);
  int n = atoi(argv[2]);
  int res = potencia(b, n);
  printf("%d elevado a la %d da %d\n", b, n, res);
}
