#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

  int mat[3][3];
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      int r = rand() % 6;
      mat[i][j] = r;
      printf("%d\t", mat[i][j]);
    }
    printf("\n");
  }
  return 0;
}
