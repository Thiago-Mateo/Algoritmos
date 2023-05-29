#include<stdio.h>
#include<stdlib.h>

int main(int argc, char * argv[]){
	int entries = 5;
	int arr[100] = {};
	
	for(int i = entries - 1 ; i >= 0; i--){
		int num;
		scanf("%d", &num);
		arr[i] = num;
	}
	for(int i = 0; i < entries; i++) {
		printf("%d", arr[i]);
	}
}
