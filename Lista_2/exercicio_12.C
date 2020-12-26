/*exercicio12*/
// Elabore um programa em C para computar a raiz quadrada de um número positivo. Use a idéia abaixo, baseada no método de aproximações sucessivas de Newton. O programa deverá imprimir o valor da vigésima aproximação.

#include <stdio.h>
#include <math.h>
   
 int main()
{   
  float x, fx, n, y;
   printf("\nDigite um valor:  "); 
   scanf("%f", &x);
   printf("\nDigite um  valor novamente:  "); 
   scanf("%f", &y);

  fx = pow(x , x) - y;
   printf("%f", fx);
    pow(x,1); (y / 2);  (n + 1);
    
   printf("%f", y);
  
  return 0;
}