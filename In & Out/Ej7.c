#include <stdio.h>
#include <stdlib.h>

int main(void) {

  srand(10);
  int rand_amount;
  int min;
  int max;
  scanf("%d", &rand_amount);
  int i = 0;
  while(i < 1){
    scanf("%d", &min);
    scanf("%d", &max);
    i++;
  }
  while(rand_amount > 0){
    int rand_numb = (rand() % max-min) + min;
    printf("%d ", rand_numb);
    rand_amount--;
  }
  
  
  
  return 0;
}
