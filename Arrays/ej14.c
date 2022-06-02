#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <time.h>

int main(int argc, char *argv[]) {

  srand(time(NULL));
  char *palos[] = {"espada", "basto", "copas", "oro"};
  char *numeros[] = {
    "Ancho",
    "Dos",
    "Tres",
    "Cuatro",
    "Cinco",
    "Seis",
    "Siete",
    "Sota",
    "Caballo",
    "Rey"
  };
  char mazo[40][50];
  for(int i = 0; i < 40; i++){
    char carta[50] = "";
    strcat(carta, numeros[i % 10]);
    strcat(carta, " de ");
    strcat(carta, palos[i / 10]);
    strcpy(mazo[i], carta);
    printf("%s\n", mazo[i]);
  }
  
  return 0;
}
