/*exercicio_vetores_22*/
#include <stdio.h>
 int main() 
{
  int aux;
  int i, vtDig[10], vtPar[10], vtImpar[10];
  printf("\n\tInsira os valores abaixo.\n");
  for (i = 0; i < 10; i++) 
  {
    printf("\nDigite o %d.o numero: ", i );
    scanf("%d", &vtDig[i]);

    if (vtDig[i] % 2 == 0) 
    {
      vtPar[i] = vtDig[i];
      vtImpar[i] = aux;
    }
    else {
            vtImpar[i] = vtDig[i];
            vtPar[i] = aux;
         }
  }
       printf("\n\nVetores pares.\n");
    for (i = 1; i < 10; i++)
      if (vtPar[i] != aux)
        printf("\n%d Digito PAR: %d", i, vtPar[i]);

  printf("\n\n");

      printf("Vetores impar.\n");
    for (i = 1; i < 10; i++)
      if (vtImpar[i] != aux)
        printf("\n %d Digito IMPAR : %d", i, vtImpar[i]);

    return 0;
}