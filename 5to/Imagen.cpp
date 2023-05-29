#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct estructura{
	char nombre[100];
	int pixel_width;
	int pixel_length;
	int tamanioKB;
};

int main(void){
	estructura *imagenes = new estructura[700];
	int menu, st;
	char alp[2], search[100];
	printf("Menu de imagenes\n");
	while(1){
		error:
		printf("1. Aniadir ficha\n2. Ver todas las fichas\n3. Buscar ficha por nombre\n0. Salir del programa\n");
		scanf("%d", &menu);
		switch(menu){
			case 0:
				return 0;
				break;
			case 1:
				printf("Ingrese el nombre de la imagen: ");
				scanf("%s", imagenes[st].nombre);
				printf("Ingrese el ancho en pixeles: ");
				scanf("%d", &imagenes[st].pixel_width);
				printf("Ingrese el largo en pixeles: ");
				scanf("%d", &imagenes[st].pixel_length);
				printf("Ingrese el tamanio en Kylobytes: ");
				scanf("%d", &imagenes[st].tamanioKB);
				st++;
				break;
			case 2:
				for(int i = 0; i < st; i++){
					printf("Nombre: %s, Ancho: %d, Largo: %d, Tamanio: %d\n", imagenes[i].nombre, imagenes[i].pixel_width, imagenes[i].pixel_length, imagenes[i].tamanioKB);
				}
				break;
			case 3: 
				fgets(alp, 2, stdin);
				printf("Ingrese el nombre de la imagen: ");
				//fgets(search, 100, stdin);
				scanf("%s", search);
				for(int i = 0; i < st; i++){
					if(strcmp(search, imagenes[i].nombre) == 0){
						printf("Nombre: %s, Ancho: %d, Largo: %d, Tamanio: %d\n", imagenes[i].nombre, imagenes[i].pixel_width, imagenes[i].pixel_length, imagenes[i].tamanioKB);
					}
				}
				break;
			default:
				goto error;
		}
	}
}
