/*exercicio_vetores_23*/
#include <stdio.h>

 int main() 
{
	float vtx[20], vty[20], prod_esc = 0;
	int i, n;

	printf("\n\tDigite o numero para cada valor: ");
	scanf("%d", &n);
  printf("\n");

    while ((n < 1) || (n > 20)) 
    {
      printf("Valor inválido. Reinforme o número de elementos de cada um dos vetores: ");
      scanf("%d", &n);
    }

      for (i = 0; i < n; i++) 
      {
        printf("Informe x[%d]: ", i);
        scanf("%f", &vtx[i]);
      }

        for (i = 0; i < n; i++) 
        {
          printf("Informe y[%d]: ", i);
          scanf("%f", &vty[i]);
        }

          for (i = 0; i < n; i++)
            prod_esc += vtx[i] * vty[i];

	      printf("Soma dos produtos escalar: %.1f\n", prod_esc);

	return 0;

}