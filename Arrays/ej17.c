//No funciona 
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

  int n = atoi(argv[1]);
  int a[n];
  a[0] = 0;
  a[1] = 1;
  a[2] = 0;
  if(n == 0){
    printf("Error\n");
    return 0;
  } else if(n == 1){

    printf("%d\n", a[0]);
    return 0;
  }
  printf("%d, %d", a[0], a[1]);
  for(int i = 2; i <= n; i++){
    a[i] = a[0] + a[1];
    printf("%d, ", a[i]);
    a[i-1] = a[i];
    a[i-2] = a[i-1];
  }

  return 0;
}
