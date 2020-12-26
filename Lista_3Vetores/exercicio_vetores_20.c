/*exercicio_20_vetores*/
#include <stdio.h>
#include <stdlib.h>

 int main() 
{
 int vet[10], n, i, prim;

 printf("\n");

  for(i=0; i<10; i++)
  {
    printf("Insirao %d valor: ", i+1);
    scanf("%d",&vet[i]);
  }
 if(i < 0|| i > 50)
  printf("Fora de intervalo\n");
 else if(i <= 50.0)
  printf("Os seguintes numeros estao no intervalo [0,50]\n");

 return 0;

}