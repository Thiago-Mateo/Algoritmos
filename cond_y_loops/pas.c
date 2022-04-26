#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int num = 46;
  int ans = atoi(argv[1]);

  if (ans == 46) {
    printf("Acertaste\n");
  } else if (ans < 46 && ans > 43) {
    printf("Cerca\n");
  } else if (ans < 44 && ans > 37) {
    printf("Te estás acercando\n");
  } else if (ans <38 && ans >19) {
    printf("Lejos\n");
  } else if (ans <20) {
    printf("Muy lejos\n");
  } else if (ans >46) {
    printf("Te pasaste\n");
  } else {
    printf("Error\n");
  }
  return 0;
}
