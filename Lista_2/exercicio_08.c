/*exercicio_08*/
// Faça um programa em C que calcule o máximo divisor comum de dois números m, n. Você deve utilizar a seguinte regra do cálculo do mdc com m ≥ n
// mdc(m, n) = m se n = 0 mdc(m, n) = mdc(n, m%n) se n > 0

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

