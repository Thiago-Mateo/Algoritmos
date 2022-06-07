//Buscaminas
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
  srand(time(NULL));
  //Argumentos
  int n = atoi(argv[1]);
  double p = atof(argv[2]);
  //El tablero
  int board[n+2][n+2];
  //Poner ceros en los bordes
  for(int i = 0; i < n+2; i++){
    board[0][i] = 0;
    board[n+1][i] = 0;
    board[i][0] = 0;
    board[i][n+1] = 0;
  }
  //Poner minas en el tablero
  for(int i = 1; i < n+1; i++){
    for(int j = 1; j < n+1; j++){
      int r = rand() % 100;
      double mina = r/100.0;
      if(mina < p)
        board[i][j] = 9;
      else
        board[i][j] = 0;
    }
  }
  //poner cantidad de minas alrededor de cada casillero
  for(int i = 1; i < n+2; i++){
    for(int j = 1; j < n+2; j++){
      if(board[i][j] == 0){
        int count = 0;
        if(board[i-1][j-1] == 9) count++;
        if(board[i][j-1] == 9) count++;
        if(board[i+1][j-1] == 9) count++;
        if(board[i+1][j] == 9) count++;
        if(board[i+1][j+1] == 9) count++;
        if(board[i][j+1] == 9) count++;
        if(board[i-1][j+1] == 9) count++;
        if(board[i-1][j] == 9) count++;
        board[i][j] = count;
      }
    }
  }
  //imprimir
  for(int i = 1; i < n+1; i++){
    for(int j = 1; j < n+1; j++){
      printf("%d\t", board[i][j]);
    }
    printf("\n");
  }

  return 0;
}
