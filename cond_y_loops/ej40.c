#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

  int letra = 0;
  while(argv[1][letra] != 0){
    i++;
  }
  printf("%d\n", i);

  for(int j = 0; j < i/2; j++){
    if(argv[1][j] != argv[1][i-j-1]){
      printf("No es palíndromo\n");
      return 0;
    }
  }
  printf("Es palíndromo\n");
  return 0;
}
