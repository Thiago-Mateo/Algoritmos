//Arreglar
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {

  char *filename = argv[1];
  FILE *fp;
  fp = fopen(filename, "r");
  int c;
  int word_count = 1;
  int line_count = 1;
  int char_count = 0;
  while((c = fgetc(fp)) != EOF){
    if(c == ' ') word_count++;
    if(c == '\n') line_count++;
    char_count++;
  }
  fclose(fp);
  printf("Cantidad de caracteres: %d\n", char_count);
  printf("Cantidad de líneas: %d\n", line_count);
  printf("Cantidad de palabras: %d\n", word_count);
  return 0;
}
//if(c == '\n') si c es igual a nueva línea
//'\n' == 32
//if(c == '\t') si c es igual a espacio
//'\t' == 10
//'\'
