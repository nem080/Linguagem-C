/*exercicio_11*/

#include <stdio.h>
#include <stdlib.h>

int main() 
{
 float n;

  printf("Digite um valores: ");
  scanf("%f",&n);             

if(n < 0|| n > 100.0)

  printf("Fora de intervalo\n");

else if(n <= 25.0)

  printf("Intervalo [0,25]\n");

else if(n <= 50.0)

  printf("Intervalo [26,50]\n");

else if(n <= 75.0)

  printf("Intervalo [51,75]");

else if(n <= 100.0)

  printf("Intervalo [76,100]\n");

return 0;

} 