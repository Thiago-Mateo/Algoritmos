#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void sort(int a[], int aux[], int lo, int hi) {
  //caso base
  if (hi - lo <= 1) return;
  //dividir recursivamente
  int mid = lo + (hi - lo) / 2;
  sort(a, aux, lo, mid);
  sort(a, aux, mid, hi);
  //merge
  int i = lo;
  int j = mid;
  for(int k = lo; k < hi; k++){
    if      (i == mid)      aux[k] = a[j++];
    else if (j == hi)       aux[k] = a[i++];
    else if (a[j] < a[i])   aux[k] = a[j++];
    else                    aux[k] = a[i++];
  }
  //copy back
  for(int k = lo; k < hi; k++){
    a[k] = aux[k];
  }
}

void randomize_array(int a[], int n, int lo, int hi){
  for(int i = 0; i < n; i++){
    a[i] = (rand() % (hi - lo)) + lo;
  }
}

void print_array(int a[], int lenght){
  printf("|");
  for(int i = 0; i < lenght;i++){
    printf("%d|", a[i]);
  }
  printf("\n");
}

void dupla(int a[], int n){
  int j = n - 1;
  int i = 0;
  while(i < n - 1){
    int suma = a[i] + a[j];
    if(suma == 0) {
      j--;
      printf("(%d %d)\n", a[i], a[j]);
    }
  }
}

int main(int argc, char *argv[]){
  srand(time(NULL));
  int lenght = atoi(argv[1]);
  int min = atoi(argv[2]);
  int max = atoi(argv[3]);
  int array[lenght];
  int aux[lenght];
  randomize_array(array, lenght, min, max);
  print_array(array,lenght);
  sort(array, aux, 0, lenght);
  print_array(array, lenght);

  return 0;
}
