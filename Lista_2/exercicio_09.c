/*exercicio_09*/
//tenho duvida
#include <stdio.h>
#include <stdlib.h>

 int main()
{
 int div, n, eprim;
 
 printf("Digite um numero:");
 scanf("%d",&n);

  div = 2;
  eprim = 1;
    while( (div<=n-1) && (eprim) ){
 if(n % div == 0)
    eprim = 0;
    div++;
    }
 if(eprim)
    printf("\nE primo!!\n");
 else
    printf("\nNao e primo!!\n");
    
    return 0;
}

