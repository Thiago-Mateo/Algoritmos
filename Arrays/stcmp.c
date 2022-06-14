#include <stdio.h">
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {

  printf("Ingrese contraseña\n");
  char password[20] = "1234";
  scanf("%s", &password);
  if(stcmp(password == "1234") == 0) //strcmp es string compare
    printf("Autorizado\n");          //devuelve 0 si dos strings son iguales
  else
    printf("Contraseña incorrecta\n", );
  return 0;
}
