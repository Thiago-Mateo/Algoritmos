#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {

  FILE *fp;
  fp = fopen("prac.txt", "r");
  char line[100] = "";
  int i = 0;
  int lines = 0;
  while (fgets(line, 100, fp) != NULL) {
    if(line[i] = "\n"){
      line[i] = 0;
      i++;
      lines++;
    }
  }
  printf("Cantidad de lineas: %d\n", lines);
  fclose(fp);
  system("rm prac.txt");
  return 0;
}
