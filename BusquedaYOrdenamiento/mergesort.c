#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void print_array(int a[], int n){
  printf("[ ");
  for(int i = 0; i < n; i++){
    printf("%02d ", a[i]);
  }
  printf("]\n");
}

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

int main(int argc, char *argv[]){
  srand(time(NULL));
  int n = atoi(argv[1]);
  int lo = atoi(argv[2]);
  int hi = atoi(argv[3]);
  int array[n];
  int aux[n];
  randomize_array(array, n, lo, hi);
  print_array(array, n);
  sort(array, aux, 0, n);
  print_array(array, n);
}
