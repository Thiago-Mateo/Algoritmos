#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  char rta = argv[1][0];
  if (rta == 'y') {
    //Enunciados
    printf("Si\n");
  } else if (rta == 'n'){
    printf("No\n");
    } else {
    printf("Respuesta invalida\n");
    }
  return 0;
}
