//No funciona
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

 int n = atoi(argv[1]);
 int a[n];

 for(int i = 1; i <= n; i++){
  a[i] += 1;
  printf("%d\n", a[i]);

 }
  return 0;
}
