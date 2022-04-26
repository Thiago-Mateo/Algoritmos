#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int n = atoi(argv[1]);
  while (n > 0) {
    printf("%d\n",n % 10 );
    n /= 10;
  }
  printf("\n");
  return 0;
}
