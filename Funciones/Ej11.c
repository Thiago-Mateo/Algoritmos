#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare_strings(char *str1, char *str2){
  int equal = 0;
  if(!strcmp(str1,str2) == 1) equal = 1;
  return equal;
}

int main(int argc, char *argv[]){
  char *str1 = argv[1];
  char *str2 = argv[2];
  int equal = compare_strings(str1, str2);
  if(equal == 0) printf("No son iguales\n");
  else printf("Son iguales\n");
  return 0;
}
