#include <stdio.h>

void triangle(int a, int b, int c){
  if(a + b > c && b + c > a && c + a > b) printf("True\n");
  else printf("False\n");
}

int main(void){
  int lado1;
  int lado2;
  int lado3;
  scanf("%d %d %d", &lado1, &lado2, &lado3);
  triangle(lado1, lado2, lado3);
  return 0;
}
