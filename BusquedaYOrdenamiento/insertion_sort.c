#include <stdio.h>
#include <stdlib.h>

void randomize_array(int a[], int n){
  for(int i = 0; i < n; i++){
    a[i] = (rand() % (20 - 1)) + 1;
  }
}


void swap(int a[], int i, int j){
  int t = a[i];
  a[i] = a[j];
  a[j] = t;
}

void sort(int a[], int n){
  for(int i = 1; i < n; i++){
    for(int j = i; j > 0; j--){
      if(a[j] < a[j - 1]) swap(a, j, j - 1);
      else break;
    }
  }
}

void print_array(int a[], int n){
  printf("[ ");
  for(int i = 0; i < n; i++){
    printf("%02d ", a[i]);
  }
  printf("]\n");
}

int main(int argc, char *argv[]){
  int lenght = atoi(argv[1]);
  int array[lenght];
  randomize_array(array, lenght);
  print_array(array, lenght);
  sort(array, lenght);
  print_array(array, lenght);
}
