#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(int argc, char *argv[]) {

  srand(time(NULL));
  int matriz[4][4];
  int seq[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  //mezclar la seq
  for(int i = 0; i < 200; i++){
    int r = rand() % 9;
    int s = rand() % 9;
    int temp = seq[r];
    seq[r] = seq[s];
    seq[s] = temp;
  }
  //Indice para sacar de seq
  int k = 0;

  for(int i = 0; i < 4; i++){
    int sum = 0;
    for(int j = 0; j < 4;j++){
      if(i != 3 && j != 3){
        matriz[i][j] = seq[k++];
        sum += matriz[i][j];
      }
      else
        matriz[i][j] = sum;
    }
  }
  //suma de columas
  for(int i = 0; i < 3; i++){
    int sum = 0;
    for(int j = 0; j < 4; j++){
      if(j != 3)
        sum += matriz[j][i];
      else
        matriz[j][i] = sum;
    }
  }
  //Imprimir la matriz
  for(int i = 0; i < 4; i++){
    for(int j = 0; j < 4;j++){
      printf("%02d ", matriz[i][j]);
    }
    printf("\n");
  }
return 0;
}
