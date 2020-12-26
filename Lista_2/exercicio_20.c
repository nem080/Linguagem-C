/*exercicio_20*/
// Um automóvel possui um medidor que informa de tempos em tempos a um velocímetro digital a distância percorrida (em metros) e o tempo gasto (em segundos). O velocímetro acumula algumas medições e eventualmente realiza cálculos para atualizar o valor da velocidade (em km/h) mostrada no display do automóvel. Desenvolva um programa que:
// • Leiaumasequênciadeparesdevaloresnaforma:distânciapercorrida<espaço>tempogasto<enter>; • Acumule os valores e quando receber um par de zeros, imprime na saída a velocidade média em
// km/h, zerando os acumuladores;
// • O programa é encerrado quando recebe um par de -1;
// 20 0.5
// 50 0.5
// 00
// Saida: 252.00 20 0.5
// 120.5 2.0
// 00
// Saida: 202.32 -1 -1
//    Encerra programa

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