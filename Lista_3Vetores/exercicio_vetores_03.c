/* exercicio_03_vetores */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[10],b[10],i;  
    for(i=0; i<10; i++) {
          printf(" Entre com um numero: ");
          scanf("%d",&a[i]);
          } 
           for(i=0; i<10; i++)  
           b[i] = a[i] * a[i]; 
           printf("\n\nBloco 1:");

           for(i=0; i<10; i++)
           printf("\n%d ",a[i]); 
           printf("\n\nBloco 2:");

             for(i=0; i<10; i++)
           printf(" \n O valor é: %d ",b[i]); 

 return 0;
}