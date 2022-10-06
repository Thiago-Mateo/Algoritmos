#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill_array(int array[], int lenght){
  for(int i = 0; i < lenght; i++){
    int r = (rand() % 200) + (-100);
    array[i] = r;
  }
}

int find_pairs(int array[], int lenght){
  for(int i = 0; i < lenght; i++){
    for(int j = i; j < lenght; j++){
      if(array[i] + array[j] == 0)printf("(%d posición %d, %d posición %d)\n", array[i], i, array[j], j);
    }
  }
}

int main(int argc, char *argv[]){
  srand(time(NULL));
  int n = atoi(argv[1]);
  int a[n];
  fill_array(a, n);
  // for(int i = 0; i < n; i++){
  //   printf("%d, ", a[i]);
  // }
  // printf("\n");
  find_pairs(a, n);
  return 0;
}
