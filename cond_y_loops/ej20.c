#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);

  if (a > b){
    printf("El segundo argumento tiene que ser igual o mayor al segundo\n");
    return 0;
  } else while (a <= b) {
   if (a % 3 == 0) {
     printf("%d\n", a);
   }
   a += 1;
  }
  return 0;
}
