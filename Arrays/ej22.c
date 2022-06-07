//Matriz identidad de n x n
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

  int n = atoi(argv[1]);
  int matriz [n][n];
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      if(matriz [i] == matriz [j])
      printf("1");
      else
      printf("0");
    }
    printf("\n");
  }

  return 0;
}
