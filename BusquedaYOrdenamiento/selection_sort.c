#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void print_array(int a[], int lenght){
  for(int i = 0; i < lenght;i++){
    printf("%d|", a[i]);
  }
  printf("\n");
}

void randomize_array(int a[], int lenght){
  for(int i = 0; i < lenght; i++){
    a[i] = (rand() % (9 - 1)) + 1;
  }
}

void selection_sort(int a[], int lenght){
  for(int i = 0; i < lenght-1; i++){
    int lowest = 0;
    int t = 10;
    for(int j = i; j < lenght; j++){
      if(a[j] < t){
        t = a[j];
        lowest = j;
      }
    }
    swap(a, i, lowest);
  }
}

void swap(int a[], int i, int j){
  int t = a[i];
  a[i] = a[j];
  a[j] = t;
}

int main(int argc, char *argv[]){
  srand(time(NULL));
  int lenght = atoi(argv[1]);
  int array[lenght];
  randomize_array(array, lenght);
  print_array(array, lenght);
  selection_sort(array, lenght);
  print_array(array, lenght);
}
