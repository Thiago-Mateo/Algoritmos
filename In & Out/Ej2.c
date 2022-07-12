#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

  int num;
  int suma = 0;
  int i = 0;
  printf("Ingresar numeros enteros\n");
  do {
    scanf("%d", &num);
    suma += num;
  } while(num != 0);
  printf("%d\n", suma);
  return 0;
}
