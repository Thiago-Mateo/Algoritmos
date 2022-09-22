#include <stdio.h>
#include <stdlib.h>

void print_array(int a[], int a_size){
  for(int i = 0;i < a_size; i++){
    printf("%d,", a[i]);
  }
  printf("\n");
}

int make_rand(int lo, int hi){
  return (rand() % (hi - lo + 1)) + lo;
}

void make_random_array(int a[], int a_size, int lo, int hi){
  for(int i = 0; i < a_size; i++){
    int r = make_rand(lo, hi);
    a[i] = r;
  }
}

int main(int argc, char *argv[]){
  srand(2);
  int a_size = atoi(argv[1]);
  int lo = atoi(argv[2]);
  int hi = atoi(argv[3]);
  int a[a_size];
  make_random_array(a, a_size, lo, hi);
  print_array(a, a_size);
}
