/*exerxixio_13_vetores*/
#include <stdio.h>
#include <stdlib.h>

 int main()
{
    int vl[5], i, maior, menor; 
    int maiorPosicao, menorPosicao;
    printf("\n\tInforme cinco valores\n\n");

  for(i=0; i<5; i++) 
  {
     printf("Informe o %d valor: ", i+0);
     scanf("%d", &vl[i]);
         if(i == 0) 
        {
          maior = vl[i];
          menor = vl[i];
          maiorPosicao = i;
          menorPosicao = i;
        }
         if(vl[i] > maior)
          { 
            maior = vl[i];
            maiorPosicao = i;
          }
             if(vl[i] < menor) 
           {
             menor = vl[i]; 
             menorPosicao = i;
            }
    }
    printf("\n Maior valor: %d  Posicao %d",maior,maiorPosicao);
    printf("\n Menor valor: %d  Posicao %d",menor,menorPosicao);

}