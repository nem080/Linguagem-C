/*exerxixio_15_vetores*/
#include <stdio.h>
#include <stdlib.h>

int vt[20]; 
int vt2[20];
int a, i, n = 0, rep = 0; 

 int main()
{

  printf("\n\tInsira uma contidade de vinte numeros\n\n");

  for (i = 0; i < 20; i++) {
     printf("\t Digite o %d valor: ", i+1); 
     scanf("%d", &vt[i]);
    if (i == 0) {
      vt2[n] = vt[i];
      n++;
    } else {
      rep = 0;
      
      for (a = 0; a < n; a++) {
        if(vt[i] == vt2[a]) {
          rep++;
        }
      }
     
      if (rep < 1) {
        vt2[n] = vt[i];
        n++;
      }
    }
  }
  for( i = 0; i < rep; i++)
    {
        for( a = 0; a < n; a++ )
        {
            if( vt[i] == vt2[a] )
                break;
        }

        if( a == n )
        {
            vt2[n] = vt[i];
            n++;
        }
    }

  printf("\n Vetor sem repetição: ");
  for (i = 0; i < n; i++)
    printf("%d ", vt2[i]);

  
  return 0;
}