#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {

  int a[100];
  double prom = 0.0;
  srand(time(NULL));

  for(int i = 0; i < 100; i++){
    a[i] = rand() % 101;
    prom = prom + a[i];
    printf("%d ", a[i]);
  }
  prom = prom / 100;
  printf("\n");
  printf("Promedio: %f\n", prom);
  return 0;
}
