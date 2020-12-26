/*exercicio_17*/
// Façaumprogramaqueleiaumnúmeroneimprimanlinhasnatelacomoseguinteformato(exemplo se n = 6):
/*
1
12
123
1234
12345
123456
*/

#include <stdio.h>

int main(void) 
{ 
 int n, j[6];
 
 printf("Entre com o valor de n: ");
 scanf("%d", &n);

 printf("\n");

  for(int i=0; i<n; i++) 
 {
   for(int j=0; j<n; j++) 
  {
     if( i == j ) 
    {
    printf("\t 1 ");
    } else if (i > j ){
    printf("\t %d ", j+1);
    }
  }
  printf("\n");
 }
 
 return 0;
}