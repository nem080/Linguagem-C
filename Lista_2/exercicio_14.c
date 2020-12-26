/*exercicio_14*/
// Implemente um programa que compute todas as soluções de equações do tipo
// x1 +x2 +x3 +x4 =C . Melhore o seu programa com as seguinte idéias.
// • Fixado x1, os valores possíveis para x2 são 0, . . . , C − x1. Fixado x1 e x2, os valores possíveis para x3 são 0, . . . , C − x1 − x2. Fixados x1, x2, e x3, então x4 é unicamente determinado.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


 int main() 
{
  float c, x1, x2, x3, x4;

   printf("\nInsira o valor para x1:  ");
   scanf("%f", &x1);
   printf("Insira o valor para x2:  ");
   scanf("%f", &x2);
   printf("Insira o valor para x3:  ");
   scanf("%f", &x3);
   printf("Insira o valor para x4:  ");
   scanf("%f", &x4);
      
   printf("\n");
      
   if (x1 != 0) 
   {
      c = (x2*x2) - 0*x1*x3;
       if (c == 0)

      printf("c é igual a 0 \n");
      printf(" x1 e x2 = %.1f \n", c);
    } 
      {
        if (c > 0) {
        x1 = (-x2 + sqrt (c))/(x2*x3);
        x2 = (-x2 + sqrt (c))/(x2*x3);
            }
         printf(" c é superior a 0:\n");
      }

     return 0;
  }