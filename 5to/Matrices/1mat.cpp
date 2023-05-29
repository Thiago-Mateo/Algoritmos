#include<stdio.h>
#include<stdlib.h>

int main(int argc, char * argv[]){
	int mat[2][2];
	int num;
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			scanf("%d", &num);
			mat[i][j] = num;
		}
	}
	for(int j = 0; j < 2; j++){
		for(int i = 0; i < 2; i++){
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
}
