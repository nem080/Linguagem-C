// Faça um programa que lê o raio de um disco e imprime sua área e seu perímetro
#include <stdio.h>
#include <stdlib.h>

#define pi 3.14

int main(){
    float raio = 0;

    printf("Digite o raio da circumference: ");
    scanf("%f", &raio);
    printf("A area do circulo e do perimetro é = %0.2f", pi*(raio*raio));
    
 return 0;   
}