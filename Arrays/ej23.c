#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {

  int a[3][3];
  int b[3][3];
  int c[3][3];
  srand(time(NULL));
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      int r = rand() % 11;
      a[i][j] = r;
      b[i][j] = r;
      c[i][j] = a[i][j] + b[i][j];
      printf("%d\t", c[i][j]);
    }
    printf("\n");
  }
  return 0;
}
