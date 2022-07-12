#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

  int suma = 0;
  int numeros;
  int i = 0;
  printf("Ingresar 10 numeros enteros\n");
  //Con el ciclo for la suma daba mal
  while(i++ < 10){
    scanf("%d", &numeros);
    suma += numeros;
  }
  printf("La suma de los numeros ingresados es %d\n", suma);
  return 0;
}
