/* Exercicio_5 */
#include <stdio.h>
#include <stdlib.h>
 
 int main() 
{
	int i, n, mtz_1[4][4], mtz_2[4][4], mtz_3[4][4];

	printf ("\n Primeira Matriz");
  printf ("\n\n");
	for(i = 0; i < 4; i++){
		for(n = 0; n < 4; n++) {
		  printf( " L:[%d] C:[%d] = ", i, n);
		  scanf( "%d", &mtz_1[i][n]);  	
	  }
  }
  printf ("\n\n");
	printf ("Segunda Matriz");
   printf ("\n\n");
	for(i = 0; i < 4; i ++){
		for(n = 0; n < 4; n++) {
		  printf("M2 [%d][%d] = ", i, n);
		  scanf("%d", &mtz_2 [i][n]);   	
	 }
  }
  printf ("\n\n");
	printf ( "\nComparação Das Matrizes");
   printf ("\n\n");
	for(i = 0 ; i < 4 ; i ++){
		for(n = 0; n < 4; n++) {
			if(mtz_1 [i][n] > mtz_2 [i][n])
			  mtz_3[i][n] = mtz_1[i][n];
			else mtz_3 [i][n] = mtz_2 [i][n];
		    printf( " \n O Maior Valor [%d] [%d] é:%d ", i, n, mtz_3[i][n]);
	 }
  }
  return 0;
}
