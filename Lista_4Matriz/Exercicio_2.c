/* Exercicio_2 */
#include <stdio.h>

int main()
{
  int mtz[4][4], i, n;

  printf("\n2) Faça uma matriz 4 x 4 com o produto do valor da linha e da coluna de cada elemento.\n\n");

  for(i = 0; i < 4; i++) {
    for(n = 0; n < 4; n++) {
        mtz[i][n] = (i+1)*(n+1);
        
        printf("\t |%d|",mtz[i][n]);
    }
    printf("\n");
  }

  return 0;
}
