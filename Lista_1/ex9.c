// Faça um programa que leia um ano (valor inteiro) e imprima se ele é bissexto ou não. OBS: São bissexto todos os anos múltiplos de 400. Não sendo múltiplo de 400, são bissextos todos os anos múltiplos de 4 mas que não são múltiplos de 100.
#include <stdio.h>
#include <locale.h>
 
int main(void){
    setlocale(LC_ALL, "Portuguese");
    int ano;
    int verifica(int ano);
    printf("Digite um ano: ");
    scanf("%d", &ano);
    if (verifica(ano) == 1)
        printf("%d, ano bissexto!", ano);
    return 0;
}

int verifica(int x){
    if(x%400 == 0 ||( x%4==0 && x%100!=0))
    return 1;
    else 
    return 0;
}