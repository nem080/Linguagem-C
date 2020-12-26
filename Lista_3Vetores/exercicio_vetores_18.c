/*exercicio_vetores_18*/
#include <stdio.h>

 int main()
{
int vt[10], i, x;

printf("\nInforme os valores\n\n");
for(i = 0; i < 10; i++)
{
  printf("Informe o %d numero: ", i+1);
  scanf("%d", &vt[i]);
}
 for (i=0;i<=1;i++)
{
    if(i%3==0)
    {
    printf("\n %i -numero multiplo de 3", i);
    }
    
    else
    {
    printf("\n %d nao e multiplo de x ", x);
    }

}
 return 0;
}