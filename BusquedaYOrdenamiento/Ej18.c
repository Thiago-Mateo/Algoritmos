#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void sort(int a[], int aux[], int lo, int hi) {
  //caso base
  if (hi - lo <= 1) return;
  //dividir recursivamente
  int mid = lo + (hi - lo) / 2;
  sort(a, aux, lo, mid);
  sort(a, aux, mid, hi);
  //merge
  int i = lo;
  int j = mid;
  for(int k = lo; k < hi; k++){
    if      (i == mid)      aux[k] = a[j++];
    else if (j == hi)       aux[k] = a[i++];
    else if (a[j] < a[i])   aux[k] = a[j++];
    else                    aux[k] = a[i++];
  }
  //copy back
  for(int k = lo; k < hi; k++){
    a[k] = aux[k];
  }
}

int ternas(int a[], int n){
  int count = 0;
  for(int i = 0; i < n - 2; i++){
    int k = n - 1;
    int j = i + 1;
    while(j < k){
      int sum = a[i] + a[j] + a[k];
      if     (sum == 0){
        count++;
        printf("(%d %d %d)\n", a[i], a[j], a[k]);
        j++;
        k--;
      }
      else if (sum < 0) j++;
      else              k--;
    }
  }
  return count;
}

void randomize_array(int a[], int n, int lo, int hi){
  for(int i = 0; i < n; i++){
    a[i] = (rand() % (hi - lo)) + lo;
  }
}

void print_array(int a[], int lenght){
  printf("|");
  for(int i = 0; i < lenght;i++){
    printf("%d|", a[i]);
  }
  printf("\n");
}

int main(int argc, char *argv[]){
  srand(time(NULL));
  int lenght = atoi(argv[1]);
  int min = atoi(argv[2]);
  int max = atoi(argv[3]);
  int array[lenght];
  int aux[lenght];
  randomize_array(array, lenght, min, max);
  print_array(array,lenght);
  sort(array, aux, 0, lenght);
  print_array(array, lenght);
  ternas(array, lenght);
  //printf("%d\n", ternas(array, lenght));
  return 0;
}
