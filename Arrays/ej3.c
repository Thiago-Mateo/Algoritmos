#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {

  int n = atoi(argv[1]);
  int m = atoi(argv[2]);
  int a[n];
  srand(time(NULL));

  for(int i = 0; i < n; i++){
    a[i] = rand() % m;
    printf("%d\n", a[i]);
  }
  return 0;
}
