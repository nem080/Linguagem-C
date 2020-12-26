/*exercicio_13*/
//  Aponte os erros de implementação existentes no código em C, a seguir, desenvolvido com o intuito de calcular e imprimir o fatorial de um número inteiro não-negativo.

/* 
(1)  scanf esta na posiçao 
        erra,faltou as aspas dupla no "%d"  
        apos a virgula faltou o & junto com valor,
        o correto seria  &valor

(2)   nao seria necessario usar a variavel float, 
        o fatorial pode ser uma variavel axiliar       

 (3)  falta um f no print,o segundo 
        "%d" referente ao fatorial tem q ser "%f" 

 (4)  essa declaração else tem q esta logo apos 
        o final do colchete  do if 
*/ 

#include <stdio.h>

int main()
{
  int n,; 
  float fatorial=1;

  printf("Entre o valor de n: ");
  scanf("%d", &n);

  fatorial = 1;

  while (n > 0) {
    fatorial = fatorial *  n;
    n--;               
  }

  printf("fatorial é = %.1f\n", fatorial);

  return 0;
}