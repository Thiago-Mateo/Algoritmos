#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]){

  int n = atoi(argv[1]);
  int num = 1;


  if(n == 0){
    printf("1\n");
    return 0;
  }
  for(int i = 1; i <= n; i++){
    num = num * 2;
    printf("%d\n", num);
  }
  return 0;
}
