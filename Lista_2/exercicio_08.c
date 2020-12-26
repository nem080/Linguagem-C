/*exercicio_08*/

#include <stdio.h>
#include <stdlib.h>

 int main()
{
  int m, n, resto;

    printf("Digite dois numeros: \n");
    scanf("%d%d", &m, &n);
              
   resto = m % n;
   while(resto!=0)
   {
    m = n;
    n = resto;
    resto = m % n;         
   }
    
    printf("MDC = %d\n", n);


  return 0;           
} 

