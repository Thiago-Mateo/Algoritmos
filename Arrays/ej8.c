//Imprimir al reves el array a
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

  int a[] = {1,2,3,4,5,6};
  for(int i = 5; i >= 0; i--){
    printf("%d\n", a[i]);
  }
  return 0;
}
