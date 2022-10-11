#include <stdio.h>
#include <stdlib.h>

int swap(int array[], int a, int b){
  int t = array[a];
  array[a] = array[b];
  array[b] = t;
}

int ordenar(int array[], int lenght){
  for(int i = 1; i < lenght; i++){
    for(int j = i; j > 0; j--){
      if(array[j] < array[j-1]) swap(array, j, j - 1);
    }
  }
}

int main(int argc, char *argv[]){
  int array[] = {2,1,3,5,4};
  int lenght = 5;
  for(int i = 0; i < lenght; i++){
    printf("%d, ", array[i]);
  }
  printf("\n");
  ordenar(array, lenght);
  for(int i = 0; i < lenght; i++){
    printf("%d, ", array[i]);
  }
}
