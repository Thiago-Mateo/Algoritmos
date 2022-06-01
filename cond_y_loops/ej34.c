#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

  int n = atoi(argv[1]);
  if(n == 0){
    printf("Error\n");
    return 0;
  } else if(n == 1){
    printf("%d es primo\n", n);
    return 0;
  } else if(n == 2){
    printf("%d es primo\n", n);
    return 0;
  }
  for(int i = n - 1; i > 1; i--){
    if(n % i == 0){
      printf("%d no es primo\n", n);
      return 0;
    }

  }
  printf("%d es primo\n", n);

  return 0;
}
