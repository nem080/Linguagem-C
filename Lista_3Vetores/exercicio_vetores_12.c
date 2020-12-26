/*exerxixio_12_vetores*/
#include <stdio.h>
#include <stdlib.h>
 int main() 
{
  int  i, maior, menor; 
  int maiorPosicao, menorPosicao;
  float vlr[5], md;
   printf("\n\tInforme cinco valores\n\n");

  for(i=0; i<5; i++) 
  {
   printf("Informe o %d valor: ", i+1);
   scanf("%f", &vlr[i]);
        if(i == 0)
      {
        maior = vlr[i];
        menor = vlr[i];
        maiorPosicao = i;
        menorPosicao = i;
      }
          if(vlr[i] > maior) 
        { 
          maior = vlr[i];
          maiorPosicao = i;
        }
            if(vlr[i] < menor) 
          {
            menor = vlr[i]; 
            menorPosicao = i;  
          }
          md += vlr[i];
  }
    printf("\n Maior valor: %d  Posicao %d\n",maior,maiorPosicao);
    printf("\n Menor valor: %d  Posicao %d\n",menor,menorPosicao);
    printf("\n A media é %.1f\n", md);
    
    return 0;
}