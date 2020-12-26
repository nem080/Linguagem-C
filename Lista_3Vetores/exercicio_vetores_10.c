/*exerxixio_10_vetores*/
#include <stdio.h>
int main()
{
 int i;
 float notas[15], media;
 for(i=0;i<15;i++)
 { 
  printf("\n");
  printf(" Digite a nota do %d aluno:  ", i+1);
  scanf("%f", &notas[i]);

  media += notas[i];
 }
  printf("\n A media geral é: %.1f", media/15.0);
  
  return 0;
}