/*exercicio_11*/
// Escrevaumprogramaparalerndenúmerosdotipofloateimprimirquantosdelesestãonosseguin- tes intervalos: [0 . . . 25], [26 . . . 50], [51 . . . 75] e [76 . . . 100]. Por exemplo, para n = 10 e os seguintes dez números 2.0, 61.5, −1.0, 0.0, 88.7, 94.5, 55.0, 3.1415, 25.5, 75.0, seu programa deve imprimir:
//    Intervalo [0..25]: 3
//    Intervalo [26..50]: 0
//    Intervalo [51..75]: 3
//    Intervalo [76..100]: 2

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