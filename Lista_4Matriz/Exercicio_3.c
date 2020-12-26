/*Exercicio_3
Leia uma matriz 4 x 4, imprima a matriz e retorne a
 localização (linha e a coluna) do maior valor.
 */
#include <stdio.h>

int main() 
{ 
  int linha,coluna, L, C;
  int mtz[4][4];
  int n = 0;

  printf("\n\t Declare os valores \n");
  for (linha=0;linha<4;linha++){
    for (coluna=0;coluna<4;coluna++){
      printf("Informe o valor do elemento L%3d / C%3d \n ",linha,coluna);
      scanf("%d",&mtz[linha][coluna]) ;
    }
  }
  printf("\nExibindo a matriz informada \n"); 
  printf( "l\\c .0.. .1.. .2.. .3.. \n\n");
  for (linha=0;linha<4;linha++){
    printf("\t|%1d| ", linha);
    for (coluna=0;coluna<4;coluna++){
      printf("\t|%5d|", mtz[linha][coluna]);
      if (mtz[linha][coluna] > n) {
        n = mtz[linha][coluna];
        L = linha;
        C = coluna;
      }
    }
    printf("\n");
  }
  printf("\nEncontrado o valor %d  na linha %d  e coluna %d\n\n\n", n, L, C);
  
   return 0;
  }