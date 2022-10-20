#include <stdio.h>
#include <stdlib.h>

int binary_search(int a[], int num){
  int lo = 0;
  int hi = 10;
  while(hi - lo > 1){
    int mid = (lo + hi) / 2;
    if(a[mid] > num)
      hi = mid;
    else
      lo = mid;
  }
  if(a[lo] == num) return lo;
  else return -1;
}

void randomize_array(int a[], int lenght){
  for(int i = 0; i < lenght; i++){
    a[i] = (rand() % (100 - 1)) + 1;
  }
}

int main(int argc, char *argv[]){
  //int longitud = atoi(argv[1]);
  int num = atoi(argv[1]);
  int array[10] = {1,2,3,4,5,6,7,8,9,10};
  int ind = binary_search(array, num);
  printf("%d\n", ind);
}
