#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
  int array[] = {1,2,3,4,5,6};
  int lenght = 5;
  int j = lenght;
  for(int i = 0; i <= lenght / 2 ; i++){
    int t = array[i];
    array[i] = array[j];
    array[j] = t;
    j--;
  }
  for(int i = 0; i < 6; i++){
    printf("%d, ", array[i]);
  }
}
