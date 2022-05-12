#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

  int n = atoi(argv[1]);
  if(n == 0){
    printf("Error\n");
    return 0;
  } else if(n == 1){
    printf("%d Es primo\n", n);
    return 0;
  }

  return 0;
}
