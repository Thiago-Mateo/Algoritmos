#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

  int n = atoi(argv[1]); //Longitud del array
  int m = atoi(argv[2]); //Longitud de los valores de numbers
  int numbers[n];
  int freq[m]; 

  for(int i = 0; i < m; i++){
    freq[i] = 0;
  }
  printf("{");
  for(int i = 0; i < n; i++){
    numbers[i] = rand() % (m+1);
    printf("%d, ", numbers[i]);
    freq[numbers[i]]++;
  }
  printf("}\n");
  for(int i = 0; i < m; i++){
    printf("%d: %d \n", i, freq[i]);
  }

  return 0;
}
