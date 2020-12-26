/*exerxixio_14_vetores*/
#include <stdio.h>

 int main()
{
 int n=0, i, r, m, aux;
 int vt[10], iguais[10];

   printf("\n\tInforme dez valores\n\n");

  for(i = 0; i < 10 ; i++)
 {
   printf("Informeo %d digito: ",i+1);
   scanf("%d", &vt[i]);
 }
    for(i = 0; i < 10; i++)
   {
      for(r = 0; r < 10; r++)
     {
       aux = 0;
       if(vt[i] == vt[r] && i != r)
       {
            for(m = 0; m < 10; m++)
         {
           if(iguais[m] == vt[r])
           aux = 1;
         }
            if(aux == 0)
           {
             iguais[n] = vt[i];
             n++;
           }
                
        }
      }
    }
            printf("\n\n Os numeros iguais são\n");
            
            for(i = 0; i < n; i++)
          {
            printf("\t%d ",iguais [i]);
          }
  
     return 0;
}