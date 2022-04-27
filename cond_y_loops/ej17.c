#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

int n = atoi(argv[1]);
int j = 0;
int x = 5;
 for (int i = 0; i < 100; i+=5){
   while (j < x) {
    if (j % n == 3){printf("%d\n", j);}
    j++;
   }
   x += 5;
 }

  return 0;
}
