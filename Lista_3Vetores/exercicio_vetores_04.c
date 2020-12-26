/*exercicio_04_vetores */
#include <stdio.h>

 int main() 
{
 int x, y, z, vetor[8];

  for (int i = 1; i <= 8; i++) {
    printf ("Digite seu %d valor: ", i);
    scanf ("%d", &vetor[i]);
  }

    printf("\nDigite o valor de x: ");

     scanf("%d", &x);
     printf("\nDigite o valor de y: ");
     scanf("%d", &y);

     printf("\nVoce escolheu os valores: %d e %d \n", vetor[x],vetor[y]);
     z = (vetor[x] + vetor[y]);

     printf("\n O valor da soma e: %d \n", z);

    return 0;

}