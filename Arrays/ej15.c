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
  char mazo[40][20];
  char carta[20];
  for(int i = 0; i < 40; i++){
    char carta[20] = "";
    strcat(carta, numeros[i % 10]);
    strcat(carta, "de");
    strcat(carta, palos[i / 10]);
    strcpy(mazo[i], carta);
    printf("%s\n", mazo[i]);
  }

  //printf("%s\n", mazo);

  return 0;
}
