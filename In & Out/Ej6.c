#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

  int a = 10;
  int b = 30;
  int c;
  while(c != EOF){
    scanf("%d", &c);
    if(c > a && c < b){
      printf("%d\t", c);
    }
  }
  return 0;
}
