/*exercicio_15*/
// Na transformação decimal para binário, modifique o programa para que este obtenha o valor binário em uma variável inteira, ao invés de imprimir os dígitos um por linha na tela. Dica: Suponha n = 7 (111 em binário), e você já computou x = 11, para "inserir"o último dígito 1 em x você deve fazer x = x + 100. Ou seja, você precisa de uma variável acumuladora que armazena as potências de 10: 1, 10, 100, 1000 etc.

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