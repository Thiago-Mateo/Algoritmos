#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {

  int mat[4][4];
  int fila = 1;
  int columna = 1;
  while(columna <= 4){
    printf("%d\t", columna);
    columna ++;
  }
  columna = 1;
  printf("\n\n");
  srand(time(NULL));
  for(int i = 0; i < 4; i++){
    double promf = 0.0;
    for(int j = 0; j < 4; j++){
      int r = rand() % 11;
      mat[i][j] = r;
      printf("%d\t", mat[i][j]);
      promf += mat[i][j];
    }
    promf = promf / 4;
    printf("Promedio fila %d: %2.f\n", fila, promf);
    fila++;
  }
  printf("\n");
   for(int j = 0; j < 4; j++){
    double promc = 0.0;
     for(int i = 0; i < 4; i++){
       promc += mat[j][0];
     }
     promc = promc / 4;
     printf("Promedio columna %d: %2.f\n", columna,promc);
     columna++;
   }

  return 0;
}
