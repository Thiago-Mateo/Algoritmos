#include <stdio.h>

void iguales(int a, int b, int c){
  if(a == b && b == c) printf("True\n");
  else printf("False\n");
};

int main(void){
  int num1;
  int num2;
  int num3;
  scanf("%d %d %d", &num1, &num2, &num3);
  iguales(num1, num2, num3);
  return 0;
}
