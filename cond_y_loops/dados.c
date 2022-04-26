//Dados en C
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (void) {
  int d = (rand(NULL) % 8) + 1;
  if (d < 6) printf ("%d\n", d);
  else       printf ("6\n");
  return 0;
}
