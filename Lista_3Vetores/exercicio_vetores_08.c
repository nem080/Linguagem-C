/*exerxixio_08_vetores*/
#include <stdio.h>

 int main()
{
  int vet[6]={1, 2, 3, 4, 5, 6};
  int i, aux;

  for(i=0; i<6;i++)
    printf("%d  ", vet[i]);
  printf("\n");
   for(i = 0; i < 6/2; i++)
  {
    aux = vet[i];
    vet[i] = vet[6 - i - 1];
    vet[6 - i - 1] = aux;
  }
  printf("Ordem inversa\n");
   for(i = 0; i < 6; i++)
   
   printf("%d  ", vet[i]);
   printf("\n");

return 0;
}
