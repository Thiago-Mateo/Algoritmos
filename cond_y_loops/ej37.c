#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {

  srand(time(NULL));
  int n = (rand() % 2)+ 1;
  if(n == 1){
    printf("Cara\n");
    return 0;
  }else{
    printf("Ceca\n");
    return 0;
  }
  return 0;
}
