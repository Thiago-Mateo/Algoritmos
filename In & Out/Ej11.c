//Completar
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {

  FILE *fp;
  fp = fopen("prac.txt", "r");
  char file[200];
  int i = 0;
  while (fgets(file, 200, fp) != NULL) {
    if(file[i] == " "){

    }
  }
  return 0;
}
