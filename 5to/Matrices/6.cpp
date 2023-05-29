#include<stdio.h>
#include<stdlib.h>

int main(int argc, char * argv[]){
	int vec[10];
	int num;
	for(int i = 0; i < 10; i++){
		scanf("%d", &num);
		vec[i] = num;
	}
	for(int i = 9; i >= 0; i--){
		printf("%d ", vec[i]);
	}
		
}
