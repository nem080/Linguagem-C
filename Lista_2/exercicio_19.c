 /*exercicio_19*/
// Um jogador da Mega-Sena é supersticioso, e só faz jogos em que o primeiro número do jogo é par, o segundo é ímpar, o terceiro é par, o quarto é ímpar, o quinto é par e o sexto é ímpar. Faça um programa que imprima todas as possibilidades de jogos que este jogador supersticioso pode jogar

 #include <stdio.h>
 int main()
{
 int num, par=0, imp=0;
 float res;

 do{
   
   printf("\nInsira os numero q deseja jogar: ");
   printf("\nPara encerra aperte o zero 0 : ");
   scanf("%d",&num);
   
    if(num!=0)
    {  
       
       res=num%2;        
       if(res==0)
     {
        par++;
     }
       else 
      {
        imp++;
      }
    }
      }while((num!=0));
       
      printf("Pares -> %d\n", par); 
      printf("Impares -> %d\n", imp); 
}