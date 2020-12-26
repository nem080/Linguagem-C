/*exerxixio_28_vetores*/
#include <stdio.h> 
#include <stdlib.h> 


 int main() 
{  
 int i, contP = 0, contI = 0, v[10], v1[10], v2[10];

  printf ("\n\tInsira os valores abaixo.\n\n"); 

 for (i=0; i < 10; i++) 
{ 
	printf ("Digite o %d numero: ", i+1); 
	scanf ("%d", &v[i]); 
} 

  for(i=0; i<10; i++)
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

  printf("\nOs números ímpares são:\n"); 
  for(i=0; i<contI; i++)
  { 
  printf("sao impar os numero %d\n", v2[i]); 
  } 

}