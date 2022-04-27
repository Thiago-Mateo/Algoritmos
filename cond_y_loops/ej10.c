#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
  srand(1);
  int suma = 0;
  int max = 0;
  int min = 100;
  for (int i = 0; i < 20; i++){
    int r = rand() % 100;
    if (r > max) max = r;
    if (r < min) min = r;
    suma += r;
    printf("%d ", r);
  }
  printf("\n");
  printf("prom: %.2f\n", suma/20.0);
  printf("max: %d\n", max);
  printf("min: %d\n", min);
  return 0;
}
