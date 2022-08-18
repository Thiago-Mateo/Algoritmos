#include <stdio.h>
#include <stdlib.h>

int main(void) {

  FILE *fp;
  FILE *fpw;
  int c;
  fp = fopen("txt.txt", "r");
  fpw = fopen("envi.txt", "w");
  do{
    c = fgetc(fp);
    if(c == ' '  || c == '\t' || c == '\n' || c == EOF){
    } else {
      fputc(c, fpw);
    }
    if(feof(fp)){
      break;
    }
  }while(1);
  fclose(fp);
  fclose(fpw);

  
  return 0;
}
