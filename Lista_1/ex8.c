// Faça um programa que lê um caracter ’F’ ou ’C’, que indica se o próximo número a ser digitado corresponde a temperatura em Fahrenheit ou Celsius. Em seguida o programa deve ler o valor da temperatura e então imprimir o valor correspondente da temperatura na outra 
 #include <stdio.h>

 int main() {
     float celsius, fahr;
     int c = 167;

     printf("Digite uma temperatura em %cC: ");
     scanf("%f", &celsius);
     fahr =celsius*(9.0/5.0)+32;
     printf("%3.f%cC é o mesmo que %3.f%cF", celsius, c, fahr, c);
 }
