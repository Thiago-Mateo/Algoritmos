#include <stdio.h>

void print_menu(){
  system("clear");
  printf("1) Cargar nota\n");
  printf("2) Leer notas\n");
  printf("3) Borrar notas\n");
  printf("4) Salir\n");
}

void save_note(){
  FILE *fp;
  fp = fopen("text.txt", "a");
  printf("Ingrese su nota\n");
  char note[100];
  fgets(note, 100, stdin);
  fprint(fp, "%s", note);
  fclose(fp);
  return;
}

void read_notes(){
  FILE *fp;
  fp = fopen("text.txt", "r");
  int c;
  while((c = fgetc(fp)) != EOF){
    putchar(c);
  }
  printf("Presione cualquier tecla para continuar\n");
  getchar();
  fclose(fp);
  return 0;
}

void delete_notes(){
  FILE *fp;
  fp = fopen("text.txt", "w");
  fclose(fp);
  printf("Notas borradas\n");
  printf("Presione cualquier tecla para continuar\n");
  getchar();
  fclose(fp);
  return;
}

int main(void){
  int choice;
  print_menu();
  scanf("%d", &choice);
  while(1){
    switch(choice){
      case 1:
        save_note();
        break;
      case 2:
        read_notes();
        break;
      case 3:
        delete_notes();
        break;
      case 4:
        return 0;
        break;
    }
  }
}
