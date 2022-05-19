#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <time.h>

int main(int argc, char *argv[]) {

  int a[100];
  srand(time(NULL));
  int max = INT_MIN;
  int min = INT_MAX;

  for(int i = 0; i < 100; i++){
    a[i] = rand() % 101;
    if(a[i] > max) max = a[i];
    if(a[i] < min) min = a[i];
    printf("%d ", a[i]);
  }
  printf("\n");
  printf("Máximo: %d\n", max);
  printf("Minimo: %d\n", min);
  return 0;
}
