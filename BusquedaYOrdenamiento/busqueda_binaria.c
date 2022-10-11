#include <stdio.h>
#include <stdlib.h>

int binary_search(int lo, int hi){
  if(hi - lo == 1) return lo;
  int mid = lo + (hi - lo) / 2;
  printf("Igual o más grande que %d? s/n\n", mid);
  char response;
  scanf("%c", &response);
  getchar();
  if(response == 'n')
    return binary_search(lo, mid);
  else
    return binary_search(mid, hi);
}

int main(int argc, char *argv[]){
  int min;
  int max;
  printf("Declara un mínimo\n");
  scanf("%d", &min);
  printf("Declara un máximo\n");
  scanf("%d", &max);
  printf("Pensa un numero entre %d y %d\n", min, max);
  printf("Listo? Presiona enter\n");
  getchar();
  int guess = binary_search(min, max);
  printf("Tu numero es %d\n", guess);
  return 0;
}
