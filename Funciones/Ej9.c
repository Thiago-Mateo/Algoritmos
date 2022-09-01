#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Uppercase(char *str){
  int i = 0;
  //Echar *Lowercase[]
  while (str[i] != 0){
    if(str[i] >= 'a' && str[i] <= 'z'){
      str[i] = str[i] - 32;
      printf("%c", str[i]);
    } else printf("%c", str[i]);
    i++;
  }
  printf("\n");
}

int main(int argc, char *argv[]){
  Uppercase(argv[1]);
}
