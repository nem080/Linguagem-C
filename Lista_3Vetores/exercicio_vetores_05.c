/* exercicio_05_vetores */

 #include <stdio.h>

int main()
{
	int v[10], x, i;
	int quantiaPares 	= 0;
		
	for(i = 1; i <= 10; i++)
	{
    printf("Entre o %d valor: ", i);
		scanf("%d", &x);
			if( !(x%2) ) 
			quantiaPares++;
	}

	  printf("%d numeros pares.\n", quantiaPares);
	
	return (0);
}

