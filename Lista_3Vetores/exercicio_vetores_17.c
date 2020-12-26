/* exercicio_17_vetores */
#include <stdio.h>
#include <stdlib.h>

int main(){

  int vt[10];
  int i;
  
  printf("\nInsira os numero\n\n");

  for (i = 1; i <= 10; i++)
 {
    printf("Digite o %d  numero:  ", i);

    scanf("%d", &vt[i]);
 }  
  printf("\n\n");
  for(i = 1; i <= 10; i++)

  {

    if(vt[i] < 0)

    {

     printf(" O valor negativo fui substituido por: 0\n");                        
    printf("\n");
    }
    
    else

    {
    
    printf("segue a sequencia sem negativo: %d\n", vt[i]);       

    }

  } 

  return 0;  

}
