#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

  int n = atoi(argv[1]); //Longitud del array
  int numbers[n];
  int freq[9];

  for(int i = 0; i < 10; i++){
    freq[i] = 0;
  }
  printf("{");
  for(int i = 0; i < n; i++){
    numbers[i] = rand() % 10;
    printf("%d, ", numbers[i]);
    freq[numbers[i]]++;
  }
  printf("}\n");
  for(int i = 0; i < 10; i++){
    printf("%d: %d \n", i, freq[i]);
  }

  return 0;
}
