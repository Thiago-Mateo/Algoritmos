#include<stdio.h>
#include<stdlib.h>

int main(int argc, char * argv[]){
	int arr[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int month, day;
	int dia_anio = 0;
	scanf("%d %d", &month, &day);
	for(int i = 1; i < month; i++){
		dia_anio += arr[i - 1];
	}
	dia_anio += day;
	printf("%d", dia_anio);
}
