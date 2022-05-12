#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

  int n = atoi(argv[1]);
  int c = 1;
  while (c <= n) {
    printf("%d", c);
    c = c + 1;
  }
  printf("\n");
  for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= n; j++) {
      if (j % i == 0 || i % j == 0) printf("*");
      else            printf(" ");
    }
    printf("%d\n", i);
  }
  return 0;
}
