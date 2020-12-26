/*exercicio_19_vetores*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM_MAX 50

 int main()
{

 int tamanho=1, vet[tamanho], i=0;

    printf("\n\tImprima o numero do vetor: ");
    scanf("%d", &tamanho);
    printf("\n");
     for(i=0; i<tamanho; i++)
     {
        printf("Preencha o vetor: ");
        scanf("%d", &vet[i]);
     } 

      for(i=1; i<5; i++)
      {
        printf("%d", vet[i]);
        printf("\n");
      }

    
    return 0;

}