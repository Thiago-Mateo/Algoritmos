#include <stdio.h>
#include <stdlib.h>
#define MAXLINE 100

int main(int argc, char *argv[]){
  //array de frecuencias
  int freqs[100];
  //blanquear freqs
  for(int i = 0; i < 100; i++){
    freqs[i] = 0;
  }
  char buffer[MAXLINE] = "";
  while(fgets(buffer, MAXLINE, stdin) != NULL) {
    int n = atoi(buffer);
    freqs[n]++;
  }
  int i = 0;
  while(i < 100){
    if(freqs[i] != 0) {
      printf("%d\n", i);
      freqs[i]--;
    } else i++;
  }
  return 0;
}
