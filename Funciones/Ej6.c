#include <stdio.h>
#include <time.h>

void random_int(int a, int b){
  int r = (rand()% b-a) + a;
  printf("%d\n", r);
}

int main(void){
  random_int(10, 40);
  random_int(1, 5);
  random_int(100, 200);
}
