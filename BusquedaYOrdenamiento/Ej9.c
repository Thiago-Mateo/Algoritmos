#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int binary_search(char *a[], int n, char *k){
  int lo = 0;
  int hi = n;
  while(hi - lo > 1){
    int mid = (hi + lo) / 2;
    if(strcmp(a[mid], k) > 0)
      hi = mid;
    else
      lo = mid;
  }
  if(!strcmp(a[lo], k)) return lo;
  else return -1;
}

int main(int argc, char *argv[]){
  char *blacklist[] = {
    "Armenia",
    "Blaziken",
    "Charmander",
    "Ditto",
    "Elefante",
    "Frog",
    "Gamora"
  };
  int lenght = 7;
  char *userinput = argv[1];
  int result = binary_search(blacklist, lenght, userinput);
  printf("%s\n", userinput);
  printf("%s\n", result == -1 ? "Autorizado" : "No autorizado");
}
