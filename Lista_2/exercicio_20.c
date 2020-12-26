/*exercicio_20*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
 float vm =0, s = 0, t = 0;
 int op = 0;
  do
  {
    
   printf("\n 1 velocidade \n 2 - espaço \n 0 -sair\n");
   scanf("%d", &op);
   system("clean");
    if (op==1) 
     {
      printf("\n Digite o espaço: ");
      scanf("%f", &s);
      printf("\n digite o tempo");
      scanf("%f", &t);
      printf("\n a velocidade media é; %.2f", (s/t));
     }else if (op==2)
      {
       printf("Digite a velocidade media: ");
       scanf("%f", &vm);
       printf("\nDigite o tempo: ");
       scanf("%f", &t);
       printf("\n o espaco e %f", (vm*t));

      }
        
        
    } while (op!=0);
    
    return 0;
}