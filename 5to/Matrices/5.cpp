#include<stdio.h>
#include<stdlib.h>

int main(int argc, char * argv){
	int arr[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int month, day;
	int rest = 0;
	int dias = 365;
	scanf("%d %d", &month, &day);
	for(int i = 1; i < month; i++){
		rest += arr[i - 1];
	}
	rest += day;
	rest = dias - rest;
	printf("Faltan %d dias para anio nuevo", rest);
}
