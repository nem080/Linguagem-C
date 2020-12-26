/* Faça um programa que leia um número real x e calcule o valor de f(x) = √x+(x/2)+xx. (pesquise sobre as funções sqrt e pow). */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void){
float x , fx;
	
printf("insira um numero: ");
	scanf("%f",  &x);
	
	fx = sqrt(x) + (x / 2) + pow(x,  x);
	printf("%.2f", fx);

return 0;
}