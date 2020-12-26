
/* exercicio_07_vetores */
// falta arrumar a localização do maior vetor 
#include <stdio.h>
 int main()
{
 float vet[10]; 
 int i, p=0, maior;

         
  printf("\nEntre com os valores do vetor:\n\n");
       
  for(i = 0; i < 10; i++)
 {
   printf("%d Digito: ", i+1);
   scanf("%f",&vet[i]);
 }

    maior = vet[0];
    for(i = 0; i < vet[i]; i++)
   {
     if (vet[i] > maior)
     {
       maior = vet[i]; 
       p=i;                 
     } 
   }
    
    printf("\nO maior elemento do vetor é: %d\n e sua posicao é: %d\n", maior, p);            


}

