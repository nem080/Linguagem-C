/*exercicio_1 Declare uma matriz 5 x 5. Preencha com 1 a diagonal 
principal e com 0 os demais elementos. Escreva ao final a 
matriz obtida.
*/

#include <stdio.h>
#include <stdlib.h>

 int main()
{
  int matriz[5][5], u, z;
   
   printf("\nDeclare uma matriz 5 x 5.  1 a diagonal principal e com 0 os demais elementos. \n\n");

	for(u = 0; u < 5; u++){
		for(z = 0; z < 5; z++){
			if (z == u){
				matriz[u][z] = 1;
			}else{
				matriz[u][z] = 0;
			}
		}
	}
	for(u = 0; u < 5; u++){
		printf("\t%d|%d|%d|%d|%d\n",matriz[0][u],matriz[1][u],matriz[2][u],matriz[3][u],matriz[4][u]);
	}
	
	return 0;
}