/*exerxixio_11_vetores*/
#include <stdio.h>
#include <stdlib.h>

 int main()
{
 int vet[10], i, p=0, n=0;
  printf("\n\tpreencha o vetor\n\n");
  for(i = 0; i <= 10; i++)
 {
   printf("Informe o %i valor do vetor:  ",i+1);
   scanf("%i", &vet[i]);
   if(vet[i]>0)
   p = p +vet[i];
   if(vet[i]<0)
   n = n + 1;
  }
  printf("\n");
  printf("numeros positivos soma = %d\n", p);
  printf("\n");
  printf("numeros negativos quantidade = %d\n", n);
  
return 0;
 } 
