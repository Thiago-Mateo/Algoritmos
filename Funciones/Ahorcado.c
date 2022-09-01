#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char *word(){
  // FILE *fp;
  // fp = fopen("palabra.txt", "w+");
  srand(time(NULL));
  int r = (rand()% 10);
  char *words[] = {
    "Ahorcado",
    "Caballero",
    "Tenedor",
    "Programar",
    "Remar",
    "Disparo",
    "Perro",
    "Mateo",
    "Yogurt",
    "Gema"
  };
  //fprintf(fp, "%s", words[r]);
  return words[r];
}

void print_game(){
  char *correct_word = word();
  int i = 0;
  // if(tries = 0){
  //   printf("   ____      \n");
  //   printf("  |    |     \n");
  //   printf("  |    |     \n");
  //   printf("  |          \n");
  //   printf("  |          \n");
  //   printf("  |          \n");
  //   printf("__|__        \n");
  //   printf("             \n");
  // }
  // if(tries = 1){
  //   printf("   ____      \n");
  //   printf("  |    |     \n");
  //   printf("  |    |     \n");
  //   printf("  |    O     \n");
  //   printf("  |          \n");
  //   printf("  |          \n");
  //   printf("__|__        \n");
  //   printf("             \n");
  // }
  // if(tries = 2){
  //   printf("   ____      \n");
  //   printf("  |    |     \n");
  //   printf("  |    |     \n");
  //   printf("  |    O     \n");
  //   printf("  |    |     \n");
  //   printf("  |          \n");
  //   printf("__|__        \n");
  //   printf("             \n");
  // }
  // if(tries = 3){
  //   printf("   ____      \n");
  //   printf("  |    |     \n");
  //   printf("  |    |     \n");
  //   printf("  |    O     \n");
  //   printf("  |   /|     \n");
  //   printf("  |          \n");
  //   printf("__|__        \n");
  //   printf("             \n");
  // }
  // if(tries = 4){
  //   printf("   ____      \n");
  //   printf("  |    |     \n");
  //   printf("  |    |     \n");
  //   printf("  |    0      \n");
  //   printf("  |   /|\      \n");
  //   printf("  |          \n");
  //   printf("__|__        \n");
  //   printf("             \n");
  // }
  // if(tries = 5){
  //   printf("   ____      \n");
  //   printf("  |    |     \n");
  //   printf("  |    |     \n");
  //   printf("  |    O     \n");
  //   printf("  |   /|\      \n");
  //   printf("  |   /      \n");
  //   printf("__|__        \n");
  //   printf("             \n");
  // }
  // if(tries = 6){
  //   printf("   ____      \n");
  //   printf("  |    |     \n");
  //   printf("  |    |     \n");
  //   printf("  |    O     \n");
  //   printf("  |   /|\     \n");
  //   printf("  |   / \      \n");
  //   printf("__|__        \n");
  //   printf("             \n");
  // }
  while(correct_word[i] != 0){
    i++;
  }
  char *word[i];
  for(int j = 0; j < i; j++){
    word[j] = "_";
  }
  printf("%s ", word[j]);
  printf("\n");
}

void tries(){
  char *correct_word = word();
  int tries = 0;
  int i = 0;
  printf("Escribir una letra\n");
  char *letter;
  scanf("%s", letter);
  // while(correct_word[i] != 0){
  //   if(correct_word[i] == letter){
  //
  //   }
  //   i++;
  // }
}

int main(void){
    //int tries = tries();
    //while(tries < 6){
      print_game();
      tries();
    }
