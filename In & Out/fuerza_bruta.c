#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {

  FILE *fp;
  fp = fopen("wordlist.txt", "r");
  char line[1000];
  system("rm temp.txt");
  system("touch temp.txt");

  while(fgets(line, 1000, fp) != NULL){
    char command[100] = "";
    strcat(command, "md5sum <<< \"");
    int i = 0;
    while (line[i] != 0){
      if(line[i] == "\n") line[i] = 0;
      i++;
    }
    strcat(command, line);
    strcat(command, "\" >> temp.txt");
    system(command);
  }
  fclose(fp);
  return 0;
}
