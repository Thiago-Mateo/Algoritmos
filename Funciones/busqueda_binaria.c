#include <stdio.h>
#include <stdlib.h>

int binary_search(int lo, int hi){
  if(hi - lo == 1) return lo;
  int mid = lo + (hi - lo) / 2;
  printf("Igual o más grande que %d? s/n\n", mid);
  char response;
  scanf("%d", &response);
  getchar();
  if(response == 'n')
    return binary_search(lo, mid);
  else
    return binary_search(mid, hi);
}

int main(int argc, char *argv[]){
  printf("Pensa un numero entre 0 y 1023\n");
  printf("Listo? Presiona enter\n");
  getchar();
  int guess = binary_search(0, 1023);
  printf("Tu numero es %d\n", guess);
  return 0;
}
