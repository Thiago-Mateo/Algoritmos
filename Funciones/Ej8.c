#include <stdio.h>
#include <string.h>

void char_count(char *s){
  int char_count = 0;
  int i = 0;
  while(s[i] != 0){
    char_count++;
    i++;
  }
  printf("Caracteres: %d\n", char_count);
}

int main(void){
  char_count("Como va?");
}
