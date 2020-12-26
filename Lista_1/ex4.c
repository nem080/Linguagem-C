// Faça um programa que leia os valores correspondentes aos três lados a, b e c de um triângulo. O programa deve então calcular a área A do triângulo utilizando a fórmula de Heron:
//  onde
// A = 􏰀s(s − a)(s − b))(s − c)
// s = a + b + c. 2
#include <stdio.h>
#include <math.h>

int main(void) {
    float s, a, b, c;
    int area;

    printf("Intruduza o valor de A: ");
    scanf("%f", &a);
    printf("Intruduza o valor de B: ");
    scanf("%f", &b);
    printf("Intruduza o valor de C: ");
    scanf("%f", &c);

    s = (a + b + c) / 2;
    area = sqrt(s *(s - a)*(s - b)*(s - c));
    printf("Aarea do tringulo A é: %d", area);
    return 0;
}