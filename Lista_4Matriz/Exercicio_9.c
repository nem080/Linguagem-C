/* Exercicio_9 */
// Faça um programa para gerar automaticamente números
// entre 0 e 99 de uma cartela de bingo. 
// Sabendo que cada cartela deverá conter 5 linhas de 5
// números, gere estes dados de modo a não ter números
// repetidos dentro das cartelas. O programa deve exibir na
// tela a cartela gerada.


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

 void imprime( int M[0][5] ) 
{
  int i,j;
  for (i=0;i<4;i++){
    for (j=0;j<4;j++){
        printf("%6d",M[i][j]);
    };
    printf("\n");
  };
  printf("\n");
};

int main () {
  int cartela[5][5];
  int num[99];
  int i,j,qual;
  srandom (time (0));
  for (i=0;i<99;i++) {
    num[i] = 0;
  };
  
  for (i=0;i<5;i++) {
    for (j=0;j<5;j++) {
      do {
        qual = (random() % 100 ) ; 
      } while (num[qual]); 
      cartela[i][j] = qual;
    };
  };

  printf("\nCartela de Binco\n");
  imprime(&cartela);

}
