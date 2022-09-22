#include <stdio.h>
#include <stdlib.h>

int find_num(int t, int a[], int length){
  for(int i = 0; i < length; i++){
    if(t == a[i]) return i;
  }
  return -1;
}

int rand_num(int max, int min){
  return (rand() % (max - min + 1)) + min;
}

void fill_array(int a[], int length, int max, int min){
  for(int i = 0; i < length; i++){
    int r = rand_num(max, min);
    a[i] = r;
  }
}

int main(int argc, char *argv[]){
  srand(2);
  int length = atoi(argv[1]);
  int max = atoi(argv[2]);
  int min = atoi(argv[3]);
  int num = atoi(argv[4]);
  int array[length];
  fill_array(array, length, max, min);
  int res = find_num(num, array, length);
  for(int i = 0; i < length; i++){
    printf("%d ", array[i]);
  }
  printf("\n");
  printf("%d\n", res);
}
