#include<stdio.h>
#include<stdlib.h>

int main(int argc, char * argv[]){
	int vec[10];
	int num;
	int max = 0;
	for(int i = 0; i < 10; i++){
		scanf("%d", &num);
		vec[i] = num;
		if(vec[i] > max) max = vec[i];
	}
	printf("Max = %d", max);
}
