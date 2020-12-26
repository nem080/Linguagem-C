/*Exercicio_4 Leia uma matriz 5 x 5. Leia também um valor X. 
O programa deverá fazer uma busca desse valor na 
matriz e, ao final, escrever a localização
 (linha e coluna) ou uma mensagem de “não encontrado”.
 */
/* xercicio_4 */
#include <stdio.h>
  

 int main()
{
  int num = 0, i, n, mtz[5][5];  

  printf("\nInforme os elementos da matriz: \n\n");  
  for(i = 0; i<5; i++)
 {
    for(n = 0; n<5; n++)
   {
      printf("\tPosição = L: %d C: %d -> ", i+1, n+1);
      scanf("%d", &mtz[i][n]);
    }
  }  

  printf("\nPesquiser um numero: ");
  scanf("%d", &num);  

   for(i = 0; i < 5; i++)
  {
    for(n = 0; n < 5; n++)
   {
      if(mtz[i][n] == num)
    {
       printf("\nNumero encontrado na linha: %d e Coluna: %d\n\n\n", i+1, n+1);
     }
   }

  }

  return 0;

}