// Faça um programa que leia os três lados de um triângulo e informe se ele é isósceles, escaleno ou equilátero. OBS: equilátero: possui os três lados iguais; isósceles: possui pelo menos dois lados iguais; escaleno: três lados distintos.
#include <stdio.h>

int main(){
    printf("Digite lados do triangulo: ");
    scanf("%d%d%d", &a, &b, &c);

    if (a < b + c && b < a + c && c < a + b)
    if (a == b && a == c)
    printf("O triangulo é equilátero");

    else if (a == b || b == c || a == c){
        printf("O tringulo é isosceles");
    }

    else{
        printf("O tringulo é escaleno");
    }
    return 0;
}