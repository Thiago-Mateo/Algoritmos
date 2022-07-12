#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
  int tdd = rand() % 10;
  int lyc = rand() % 10;
  int arrays = rand() % 10;
  int InOut = rand() % 10;
  int func = rand() % 10;
  while(1){
    printf("1 - Tipos de datos\n2 - Loops y condicionales\n3 - Arrays\n4 - I/O\n5 - Funciones\n6 - Salir\n");
    printf("Poné el número de la materia de la cual quieras ver la nota\n");
    int opción;
    scanf("%d", &opción);
    if(opción == 1){
      printf("Tu nota en Tipos de Datos es %d\n", tdd);
    } else if (opción == 2){
      printf("Tu nota en Loops y Condicionales es %d\n",  lyc);
    } else if (opción == 3){
      printf("Tu nota en Arrays es %d\n", arrays);
    } else if (opción == 4){
      printf("Tu nota en I/O es %d\n",  InOut);
    } else if (opción == 5){
      printf("Tu nota en Funciones es %d\n", func);
    } else if (opción == 6){
      return 0;
    } else {
      printf("%s\n", "Error");
    }
  }

  return 0;
}
