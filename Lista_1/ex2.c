/*Faça um programa que leia dois valores inteiros nas variáveis x e y e troque o conteúdo das variáveis. Refaça este problema sem o uso de outras variáveis que não x e y.*/

#include <stdio.h>

void troca (float *a, float *b){
float aux;
aux = *a;
*a = *b;
*b = aux;
}

int main() {
	float x, y;

	printf("Insira um valor para X:");
  scanf("%f", &x);
  printf("Insira o valor de Y:  ");  
  scanf("%f", &y);

  troca(&x, &y);
  printf("X é igual a %.2f e Y é igual a %.2f", x, y);
 return  0;
}