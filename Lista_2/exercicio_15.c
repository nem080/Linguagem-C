/*exercicio_15*/

#include <stdio.h>
#include <stdlib.h>

 int main()
{
  int  dec, temp, i, j=1, bin=0;

    printf("\n Digite um numero decimal para converter em binario: ");
    scanf("%d", &dec);
    temp = dec;
     while(temp != 0)
    {
        i = temp % 2;
        bin = bin + (i * j);
        temp = temp/2; 
        j = j * 10;
    }

    printf("\n O numero %d convertido em binario é: %d\n", dec, bin);
  
  return 0;
}