
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

 int n = atoi(argv[1]);
 int a[n];
 int num = 1;

 for(int i = 1; i <= n; i++){
  a[i] = num;
  printf("%d\n", a[i]);
  num++;
 }
  return 0;
}
