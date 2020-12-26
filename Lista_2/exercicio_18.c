#include <stdio.h>
 
/**
18. Faça um programa que leia um número n e imprima n linhas na tela com o seguinte formato (exemplo se n = 6):
*/
int main(void) {
 
 int n;
 
 printf("Entre com o valor de n: \n");
 scanf("%d", &n);
 
 // linhas e colunas 
 // 6 linhas e 6 colunas
 // percorrer 6 linhas 
 // percorrer 6 colunas 
 /**
 0 1 2 3 4 5 (j)
 0 + - - - - -
 1 * + - - - -
 2 * * + - - -
 3 * * * + - -
 4 * * * * + -
 5 * * * * * +
(i)
 
 Em qual situação você deve colocar:
 + => sempre que a (linha == coluna)
 - => sempre que (linha < coluna)
 linha = 0 coluna = 1 
 linha = 0 coluna = 2
 linha = 0 coluna = 3 
 linha = 0 coluna = 4
 linha = 0 coluna = 5 
 linha = 1 coluna = 2 
 linha = 1 coluna = 3
 linha = 1 coluna = 4
 linha = 1 coluna = 5
 linha = 2 coluna = 3
 linha = 2 coluna = 4
 linha = 2 coluna = 5
 * => sempre que (linha > coluna)
 linha = 1 coluna = 0
 linha = 2 coluna = 0
 linha = 2 coluna = 1
 linha = 3 coluna = 0
 linha = 3 coluna = 1
 linha = 3 coluna = 2
 
 -> diagonal principal
 */
 // i = linhas
 // j = coluna
 for(int i=0; i<n; i++) {
 for(int j=0; j<n; j++) {
 // aqui dentro você tem todas s informações
 // linha ? (i)
 // coluna ? (j)
 // se a linha for igual a coluna
 // i == j => diagonal principal
 if( i == j ) {
 printf(" + ");
 } else if (i > j ){
 printf(" * ");
 } else {
 printf(" - ");
 }
 }
 printf("\n");
 }
 
 return 0;
}