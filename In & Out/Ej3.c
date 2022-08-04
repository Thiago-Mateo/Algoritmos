#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

  int n, m;
  int suma = 0;
  printf("Ingresar un numero\n");
  scanf("%d", &n);
  //Leer linea con n numeros y sumarlos
  for(int i = 0; i < n; i++){
    scanf("%d", &m);
    suma += m;
  }
  printf("%d\n", suma);
  return 0;
}
