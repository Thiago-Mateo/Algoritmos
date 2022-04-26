//Factorial en C
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  int res = 1;

  if (n == 0) {
    printf("%d\n", res);
  } else {

    while (n > 0) {
    res *= n; //res = n * res
    n--; // n = n - 1
    }
    printf("%d\n", res);
  }
  return 0;
}
