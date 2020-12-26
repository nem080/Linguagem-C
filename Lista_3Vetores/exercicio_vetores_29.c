/*exerxixio_29_vetores*/
#include <stdio.h> 
#include <stdlib.h> 

 int main() 
{  
 int i, contP = 0, contI = 0, v[6], v1[6], v2[6];
 int soma, soma2;

  printf ("\n\tInsira os valores abaixo.\n\n"); 

 for (i=0; i < 6; i++) 
{ 
	printf ("Digite o %d numero: ", i+1); 
	scanf ("%d", &v[i]); 
} 

  for(i=0; i<6; i++)
  { 
      if(v[i] % 2 == 0)
      { 
        v1[contP] = v[i]; 
        contP++;
      } 

      if(v[i] % 2 != 0)
      { 
        v2[contI] = v[i]; 
        contI++;
      } 

  } 
    printf("\nOs números pares são:\n\n"); 
     for(i=0; i<contP; i++)
      { 
        printf("sao pares os numero %d\n", v1[i]); 
      }
        for(i = soma = 0; i < 6; ++i)
        {
          if(i % 2)
          soma += v[i];
         } 
          printf("\nA soma dos pares é = %d\n ", soma);
        
  printf("\nOs números ímpares são:\n\n"); 
  for(i=0; i<contI; i++)
  { 
  printf("sao impar os numero %d\n", v2[i]); 
  } 
  for(i = soma2 = 0; i < 6; ++i)
        {
          if(i % 2)
          soma2 += v[i];
         } 
    printf("\nA soma dos ipares é = %d\n ", soma);
  
}