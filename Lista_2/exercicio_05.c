/*exercicio_05*/
// Faça um programa que lê um número n e imprima os valores
// para j de 1 até n, um valor por linha.

//rever tem duvidas 
#include <stdio.h>
#include <stdlib.h>

 int main()
{
    int n, j, valor, soma = 0, i = 1;

    printf("Digite um valor ");
    scanf("%d", &n);
    
     while (i < n)
    {
       scanf("%d", &soma);
       soma += valor;
        i++;
    }

    printf("A soma dos %d valores é %d\n", n, soma);

  
  return 0;
    
}