/*exercicio_34_vetores*/
#include <stdio.h>
#include <stdlib.h>

#define MAX 10

 int main()
{    
  int vlor, ext, vtr[MAX]={0}, i = 0, n;

   printf("\n");

   while(i < MAX)
   {        
      printf("\tInsira uma numero um numero: ");
      scanf("%d", &vlor);        
       for(n = ext = 0;
        n < i; n++)            
        if(vtr[n] == vlor) ext = 1;        
        if(ext)            
        printf("\no numero %d ja existe \n", vlor);
        else            
        vtr[i++] = vlor;    
   } 
      
        printf("\nvetor:\n\n");
            for(i = 0; i < MAX; i++)
        printf("%d\n", vtr[i]);
            
  return 0;
}