#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {

  srand(time(NULL));
  int n = atoi(argv[1]);
  int traza = 0;
  int a[n][n];
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      a[i][j] = rand() % 11;
      printf("%d\t", a[i][j]);
      if(i == j) traza += a[i][j];
    }
    printf("\n");
  }
  printf("Traza:%d\n", traza);
  return 0;
}
