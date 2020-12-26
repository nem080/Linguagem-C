/*exerxixio_09_vetores*/
#include <stdio.h>

int main() {

 int val[6], i;
    printf("\nDigite somente os numeros pares\n");
	 for (i=0; i<6; i++) 
  {
    printf("\n");
		printf("Informe o %dº número: ", i+1);
		scanf("%d", &val[i]);

		 while (val[i] % 2 != 0) 
    {
			printf("O número precisa ser par. Reinforme o %dº número: ", i+1);
			scanf("%d", &val[i]);
		}
	}
	  printf("\nEm ordem inversa a da leitura:\n");

	 for (i=5; i>=0; i--)

		printf("\n Numero: %d\n", val[i]);

	  printf("\n");

	  return 0;
}