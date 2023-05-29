#include<stdio.h>
#include<stdlib.h>

swap(int arr[], int i, int j){
	int b = arr[i];
	arr[i] = arr[j];
	arr[j] = b;
}

int main(int argc, char * argv[]){

	int vector[4] = {};
	int numbs = 4;
	int media = 0;
	
	for(int i = 0; i < numbs; i++){
		int num;
		scanf("%d", &num);
		vector[i] = num;
	}
	
	for(int i = 0; i < numbs; i++){
		for(int j = 0; j < numbs - 1; j++){
			if(vector[j] > vector[j + 1]) swap(vector, j, j + 1); 
		}
	}
	
	media = (vector[1] + vector[2]) / 2;
	
	printf("%d\n", media);
	for(int i = 0; i < numbs; i++){
		printf("%d ", vector[i]);
	}
	
}
