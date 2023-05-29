#include<stdio.h>
#include<stdlib.h>

int main(int argc, char * argv[]){
	int vec1[2];
	int vec2[2];
	int vec3[2];
	int num;
	printf("Vector 1\n");
	for(int i = 0; i < 2; i++){
		scanf("%d", &num);
		vec1[i] = num;
	}
	printf("Vector 2\n");
	for(int i = 0; i < 2; i++){
		scanf("%d", &num);
		vec2[i] = num;
	}
	for(int i = 0; i < 2; i++){
		vec3[i] = vec1[i] - vec2[i];
	}
	for(int i = 0; i < 2; i++){
		printf("%d ", vec3[i]);
	}
}
