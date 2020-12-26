/*execicio32*/
#include <stdio.h>
#include <stdlib.h>
int main(){
      int i, j, k=0;    
      int n[5], n1[5], soma, mult, inter[5];    inter[0]=0;    
      for(i=0; i<5; i++)    
      {        
        printf("Digite o valor de x:\n");
        scanf("%d", &n[i]);
        for(j=1; j<=i; j++)
        {
          while(n[i]==n[j-1])            
          {                
            printf("Numero repetido, digite o valor de x novamente.\n");
            scanf("%d", &n[i]);
            continue;       
                 }        }        
                 printf("Digite o valor de y:\n");
                 scanf("%d", &n1[i]);  
                 for(j=1; j<=i; j++)
                 {
                   while(n1[i]==n1[j-1])
                   {
                     printf("Numero repetido, digite o valor de y novamente.\n");
                     scanf("%d", &n1[i]);  
                     continue;
                     }        
                     }
                     }    
                     for(i=0; i<5; i++)    
                     {        
                       soma=n[i]+n1[i];
                       mult=n[i]*n1[i];        
                      printf("Soma de x e y na posicao %d=%d\nMultiplicacao na posicao %d=%d\n", n[i], soma, n[i], mult);
                      }
                     for(i=0; i<5; i++)
                      {        
                        for(j=0; j<5; j++)
                        {
                          if((i==0) && (j==0))                
                          printf("Interseccao de x e y:\n");            if(n[i]==n1[j])            {                inter[k]=n[i];                
                          printf("%d ", inter[k]);
                           k++;            
                           }        
                           }        
                           if((i==4) && (k==0)) 
                          printf("Nao ha interseccao.\n");    
                          
                          }
                          }