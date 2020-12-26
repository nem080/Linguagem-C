// Faça um programa que leia o valor da base e altura de um triângulo e calcule o valor da sua área.

#include <stdio.h>

int main(){
    float area, base, alt;

    printf("Declare a base: ");
    scanf("%f", &base);

    printf("Declare a alt: ");
    scanf("%f", &alt);

    area = (base * alt) / 2;
    printf("Area total do tringulo é: %2.f", area);
    return 0;

}