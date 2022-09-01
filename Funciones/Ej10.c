#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Lowercase(char *str){
  int i = 0;
  while (str[i] != 0){
    if(str[i] >= 'A' && str[i] <= 'Z'){
      str[i] = str[i] + 32;
      printf("%c", str[i]);
    } else printf("%c", str[i]);
    i++;
  }
  printf("\n");
}

int main(int argc, char *argv[]){
  Lowercase(argv[1]);
}
