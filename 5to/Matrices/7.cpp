#include<stdio.h>
#include<stdlib.h>

int main(int argc, char * argv[]){
	int vec[10];
	int num;
	int med = 0;
	for(int i = 0; i < 10; i++){
		scanf("%d", &num);
		vec[i] = num;
		med += num;
	}
	med = med / 10;
	printf("Media = %d\n", med);
	printf("Mayor a la media = ");
	for(int i = 0; i < 10; i++){
		if(vec[i] > med) printf("%d\n", vec[i]);
	}
}
