#include <stdio.h>

void print_array(int a[], int length){
  for(int i = 0; i < length; i++){
    printf("%d ", a[i]);
  }
  printf("\n");
}

int main(void){
  int a[] = {1,2,3,4,5};
  int b[] = {99,101,72,99,535,1999};
  int c[] = {0};
  print_array(a, 5);
  print_array(b, 6);
  print_array(c, 1);
}
