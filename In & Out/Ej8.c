#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

  int a;
  int intentos = 0;
  srand(4);
  int num = (rand() % 1000) + 1;
  printf("Ingresar un numero entre 1 y 1000\n");
  while(intentos < 10){
    scanf("%d", &a);
    if(a < num){
      printf("Mayor\n");
      intentos++;
    }
    else if(a > num){
      printf("Menor\n");
      intentos++;
    }
    else if(a == num){
      printf("Le acertaste!\n");
      return 0;
    }
  }
  printf("Perdiste!\n");
  return 0;
}
