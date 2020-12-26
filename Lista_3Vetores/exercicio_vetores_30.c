/* exercicio_30_vetores*/
#include <stdlib.h>
#include <stdio.h>

 int main()
{
  int x[10], y[10], i, n;

  for(i = 0; i < 10; i++)
  {
     printf("Conplete o vetor x[%d]", i);
     scanf("%d", &x[i]);
     printf("Conplete o vetor y[%d]", i);
     scanf("%d", &x[i]); 
  }
  int n;
    for ( i = 0; i < 10; i++)
    {
     if (x[i] == y[i])
      {
        n = x[i];        
      }       
    }
    printf("A interseccão é: %d", &n);

    return 0;

}   