#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

  int num;
  int suma = 0;
  //Sumar hasta EOF (End Of File)
  while(scanf("%d", &num) != EOF) {
    suma += num;
  }
  printf("\n");
  printf("%d\n", suma);
  return 0;
}
