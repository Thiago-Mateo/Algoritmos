#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void randomize_array(int a[], int lenght){
  for(int i = 0; i < lenght; i++){
    a[i] = (rand() % (9 - 1)) + 1;
  }
}

void print_array(int a[], int lenght){
  for(int i = 0; i < lenght;i++){
    printf("%d|", a[i]);
  }
  printf("\n");
}

void bubblesort(int a[], int lenght){
  for(int i = 0; i < lenght; i++){
    for(int j = 0; j < lenght - 1; j++){
      if(a[j] > a[j + 1]) swap(a, j, j + 1);
    }
  }
}

void swap(int array[], int a, int b){
  int t = array[b];
  array[b] = array[a];
  array[a] = t;
}

int main(int argc, char *argv[]){
  int lenght = atoi(argv[1]);
  int array[lenght];
  randomize_array(array, lenght);
  print_array(array, lenght);
  bubblesort(array, lenght);
  print_array(array, lenght);
}
