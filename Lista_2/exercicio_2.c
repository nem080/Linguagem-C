//exercicio_02

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

 int main(void)
{
    int a, b, i;
    int soma = 1;
    printf("Insira os valores inteiro a: ");
    scanf("%d", &a);
    printf("Insira os valores inteiro b: ");
    scanf("%d", &b);
    i = b;

    while(b > 0)  
    { 
      soma = soma * a; b--;
    
    }
    
    printf("%d elevadoa a %d é: %d", a, i, soma);
    
    
 return 0;
 
}