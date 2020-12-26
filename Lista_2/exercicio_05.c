/*exercicio_05*/
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