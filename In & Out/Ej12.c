//Parsear el codigo de estado y mensaje de una
//respuesta HTTP obtenida por CURL
//Falta completar
#include <stdio.h>
#include <stdlib.h>
#define MAXLINE 100

int main(int argc, char *argv[]) {
  char buffer[MAXLINE];

  int http_codes[5] = {200, 300, }

  while(fgets(buffer, MAXLINE, stdin) != NULL) {
    if(buffer[0] == '<'){
      //printf("%s\n", buffer);
      int code;
      char c;
      char protocol[10];
      char message[50];
      sscanf(buffer, "%c %s %d %s", &c, protocol, &code, message);
      int i = 0;
      while(i < 5) {
        if(code == http_codes[i]) break;
        i++;
      }
      //printf("%s %d %s\n", protocol, code, message);
      return 0;
    }
  }
  return 0;
}
