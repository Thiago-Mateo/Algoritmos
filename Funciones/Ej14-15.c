#include <stdio.h>

//Intercambia el valor de dos enteros
void swap(int *a, int *b){
  int t = *a;
  *a = *b;
  *b = t;
}
//Intercambia el valor de dos valores dentro de un array de enteros
void array_swap(int array[], int i, int j){
  int t = array[i];
  array[i] = array[j];
  array[j] = t;
}

int main(void){
  int a = 12;
  int b = 3;
  int array[] = {1,2,3,4,5};

  printf("a: %d  b: %d\n", a, b);
  printf("Array[0]: %d  Array[3]: %d\n",array[0], array[3]);

  swap(&a, &b);
  array_swap(array,0,3);

  printf("----------\n");
  printf("a: %d  b: %d\n", a, b);
  printf("Array[0]: %d  Array[3]: %d\n",array[0], array[3]);
}
