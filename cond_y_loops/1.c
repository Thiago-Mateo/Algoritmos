#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  int c = atoi(argv[3]);
  if (a == b && a == c && b == c) {
    printf("Iguales\n");
  } else {
    printf("No iguales\n");
  }
  return 0;
}
