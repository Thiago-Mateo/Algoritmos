#include<stdio.h>
#include<stdlib.h>

int main(int argc, char * argv[]){
	int arr[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int month;
	scanf("%d", &month);
	printf("%d", arr[month - 1]);
		
}
