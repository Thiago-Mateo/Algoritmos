#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int n = atoi(argv[1]);
    int a = 0; // f1 = 0
    int b = 1; // f2 = 1
    int c = 0;

    if (n == 1){
  printf("%d\n", a);
  return 0;
}
  if (n == 2) {
    printf("%d %d\n", a, b);
    return 0;
  }
  if (n <= 0) {
   printf("Números menores que 1 no aceptados\n");
   return 0;
  }
  for (int i = 3; i <= n; i++) {
    c = a+b;
    printf("%d\n", c);
    a = b;
    b = c;
  }
  printf("\n");
  return 0;
}

  /*  int a = 0;
    int b = 1;
    int c = a+b;
  for (int n = atoi(argv[1]); n >= 0; n--){*/
