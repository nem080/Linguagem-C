/*exercicio_03*/
#include <stdio.h>
#include <stdlib.h>

  int main()
{
  int n, i, compute = 0;
    printf("\nInsira o valor de n: ");
    scanf("%d", &n);

  for (i = 1; i <= n; i++)      
    compute = compute + i * (i + 1);         
    printf("O valor da computação é: %d\n", compute); 
        
 return 0;
}
