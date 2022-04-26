#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
  int a;
  int b;
  a = atoi(argv[1]);
  b = atoi(argv[2]);
  int c = a / b;
  if (a % b == 0) {
    printf("%d\n", c);
  } else {
    printf("No se pueden dividir\n");
  }
  return 0;
}
