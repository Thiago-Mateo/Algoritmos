#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

  double pinta1 = 1.00;
  double pinta2 = 0.50;
  int n = atoi(argv[1]);

  for(int i = 0; i < n; i++){
    pinta1 = pinta1 + pinta2;
    printf("%.10f\n", pinta1);
    pinta2 = pinta2 / 2;
  }

  return 0;
}
