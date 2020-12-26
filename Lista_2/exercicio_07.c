/*exercicio_07*/
// Considere o programa para determinar se uma sequência de n números digitados pelo usuário está
// n. Por que? ordenado ou não. Faça o programa usando uma variável contadora.


#include <stdio.h>
#include <stdlib.h>


int main()
{
  int n, i=0, j=0,contador;
  int num [100];

    printf("\nInsira a contidade de numero a serem ordenado? ");
    scanf("%d", &n);
    printf("\n");

  for(i = 0; i< n; i++)
 {
    printf("Insira um numero: ");
    scanf("%d",&num[i]);
 }
    for(j=0; j<n; j++)
   {
      for(i=0; i<n; i++)
     {
        if(num[i]>num[j])
       {
          contador = num[j];
          num[j] = num[i];
          num[i] = contador;
        } 
      }
   }

    printf("\n Os numeros em ordem são:\n");
      for(i = 0; i < n; i++)
      {
        printf("%d\n",num[i]);
      }

      return 0;
}