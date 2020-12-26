/* Exercicio_10 */
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ALUNOS 5

 int main ()
{
  int i, j, acertoAluno[ALUNOS];
	char respAlunos[ALUNOS][11];
	char gabarito[11] = "ABCDDCBAAB";
                  
   printf("\n\n");
   for (j = 0; j < 5; j++) 
   {
    printf("\nInforme as respostas do aluno %d:\n", j+1);
    printf("\n");
    for (i=0; i<10; i++) 
    {
      printf("Questão %d: ", i+1);
      scanf(" %c", &respAlunos[j][i]);
    }
	  acertoAluno[j] = 1;
	  }

    printf("\n\n");

	 for (j=0; j<5; j++) 
   {
		for (i=0; i<10; i++) 
    {
      if (toupper(respAlunos[i][j]) == toupper(gabarito[j])) 
      {
				acertoAluno[i]++;
			}
		}
	 }

   printf("\n\n");
   for (j=0; j<5; j++)
		printf("Aluno: %d\t nota: %d\t%s\n", j+1, acertoAluno[j], (acertoAluno[j] <= 6) ? "Reprovado" : "Aprovado");
  	printf("\nQuestões que todos os alunos erraram:\n");

   printf("\n\n");

	for (i = 0; i < ALUNOS; i++) 
  {
		printf ("\n aluno[%d] = %d",i+1,acertoAluno[i]);
	}

  for (i=0; i<10; i++)
		if (acertoAluno[i] == 0)
			printf("Questão: %d\n", i+1);
	printf("\nPercentual de acertos:\n");

	for (i=0; i<10; i++)
		printf("Questão: %d\t%d%%\n", i+1, (acertoAluno[i] * 5) / 10);
	printf ("\n\n\n");
	return 0;
}