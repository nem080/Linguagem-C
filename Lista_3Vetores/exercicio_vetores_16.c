/*exerxixio_16_vetores*/
#include <stdio.h>

 int main() 
{
	float vt[5];
	int aux, i;
  printf("\n\tInforme cinco valores\n\n");
	for (i=0; i<5; i++) 
  {  
		printf("Informe o %d numero do vetor: ", i+1);
		scanf("%f", &vt[i]);
	}

	printf("\nEscolha uma das opçães abaixo:\n\n\t1 - Ordem direta\n\t2 - Ordem inversa\n\t0 - Fim\n\n Digite sua opção? ");

	scanf("%d", &aux);

    while ((aux < 0) || (aux > 2))
    {

      printf("Opção inválida\nOpção? ");

      scanf("%d", &aux);

    }

      switch (aux) 
      {

        case 1:

          printf("1 - Ordem direta\n");

          for (i=0; i<5; i++)

            printf("\t\n%d:  %.1f", i, vt[i]);

          break;

        case 2:

          printf("2 - Ordem inversa\n");

          for (i = 5; i>0; i++)

            printf("\t %d: %f", i, vt[i]);

          break;

        case 0:

          printf("\n\t\t------ Fim --------\n");

      }

	return 0;

}