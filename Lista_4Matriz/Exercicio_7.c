/* Exercicio_7 */
#include <stdio.h>
#include <stdlib.h>

 int main()
{
  int mtz[3][3], i, j, soma = 0;
printf("\n\n");
  for (i = 0; i < 3; i++)
  {
   for (j = 0; j < 3; j++)
   {
    printf ("Insira um numero na matriz [%d][%d]: ", i, j);
    scanf ("%d", &mtz[i][j]);
   }
  }
  soma = mtz[0][0] + mtz[1][1] + mtz[2][2];

  printf ("A soma da diagonal principa da matriz é: %d", soma);

  return 0;

}
