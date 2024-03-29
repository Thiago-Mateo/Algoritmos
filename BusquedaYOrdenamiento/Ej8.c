#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int binary_search(char *a[], int n, char *k){
  int lo = 0;
  int hi = n;
  while(hi-lo > 1){
    int mid = (lo + hi) / 2;
    if(strcmp(a[mid], k) > 0)
      hi = mid;
    else
      lo = mid;
  }
  if(!strcmp(a[lo], k)) return lo;
  return -1;
}


int main(int argc, char *argv[]){

  char *whitelist[] = {
    "arbol",
    "bueno",
    "casa",
    "elefante",
    "faina",
    "gallina",
    "hueso",
    "huevo",
    "isla"
  };
  int n = 9;
  char *k = argv[1];

  int idx = binary_search(whitelist, n, k);
  printf("%d\n", idx);
  printf("%s\n", idx == -1 ? "no autorizado" : "autorizado");
}
