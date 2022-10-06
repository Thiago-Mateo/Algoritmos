#include <stdio.h>
#include <stdlib.h>

void cadena(int n){
  int suma = n;
  printf("%d - ", n);
  int i = 2;
  while(n != 1){
  if(n % i == 0){
    n /= i;
    suma += n;
    if(n == 1)printf("%d\n", n);
    else printf("%d - ", n);
  }
  else i++;
  }
  printf("Suma = %d\n", suma);
}

int main(int argc, char *argv[]){
  int n = atoi(argv[1]);
  cadena(n);
}
