/* exercicio_02_vetores*/
#include <stdio.h>

 int main()
{ 
 int vet[5];
 int i;

  for(i=0; i<=5; i++){
    printf(" Digite o valor do Vetor: ");
    scanf("%d", &vet[i]);
 }
 for(i=0; i<= 5; i++){
 printf("\n Você digitou: %d ", vet[i]);
}

 return 0;
}
