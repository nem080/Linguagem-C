 //exercicio_04
// Faça um programa que lê um número n e imprima os valores entre 2 e n, que são divisores de n.

#include <stdio.h>
#include <stdlib.h>

 int main()
{
 int n, valor, i;

  printf("\n Insira o valor de n: ");
  scanf("%d", &n);
  valor = n;

  for (i = 2; i < n; i++){
      if (n % i == 0){
           printf("Divisor é :%d \n", i);
    }
  }
    printf("São divisor %d: ", valor);
   
 return 0;
}