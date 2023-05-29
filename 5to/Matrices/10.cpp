#include<stdio.h>
#include<stdlib.h>

int main(int argc, char * argv[]){
	int vec1[3];
	int vec2[3];
	int num;
	int prod = 0;
	for(int i = 0; i < 3; i++){
		scanf("%d", &num);
		vec1[i] = num;
	}
	for(int i = 0; i < 3; i++){
		scanf("%d", &num);
		vec2[i] = num;
	}
	for(int i = 0; i < 3; i++){
		prod += vec1[i] * vec2[i];
	}
	printf("%d", prod);
}
