/*exercicio_16*/
#include <stdio.h>

 int main() 
{ 
 int n;
 int j[50];

 printf("Entre com o valor de n: ");
 scanf("%d", &n);

 printf("\n");

 for(int i=0; i<n; i++) 
 {
     for(int j=0; j<n; j++) 
    {
       if( i == j ) 
      {
        printf("%d", j+1);
      } else if (i > j ){
        printf("  ");
        } 
    }
  printf("\n");
 }
 
 return 0;
}