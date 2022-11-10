#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
  char *word = argv[1];
  int c = 0;
  int i = 0;
  while(word[i] != NULL){
    if(word[i] >= 'A' && word[i] <= 'z') c++;
    i++;
  }
  printf("%d\n", c);
}
