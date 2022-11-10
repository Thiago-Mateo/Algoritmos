#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[]){
  char *word = argv[1];
  int c = 0;
  int i = 0;
  bool pal = false;
  while(word[i] != NULL){
    if(word[i] >= 'A' && word[i] <= 'z') c++;
    i++;
  }
  i = 0;
  int t = c;
  for(int j = 0; j < c / 2 ; j++){
    if(word[j] == word[t - 1]) {}
    else{
      printf("No es palindromo\n");
      return 0;
    }
    t--;
  }
  printf("Es palindromo\n");
}
