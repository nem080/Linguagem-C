// Escreva um programa lê três números e os imprime em ordem (ordem crescente).
#include <stdio.h>

int main(void){
    int A, B, C;
    printf("Declare tres numeros: ");
    scanf("%d %d %d", &A, &B, &C);
    if (A < B && A < C){
        if(B < C)
        printf("%d %d %d", A, B, C);
        else 
        printf("%d %d %d", A, C, B);
    }
    if (B < A && B < C){
        if(A < C)
        printf("%d %d %d", B, A, C);
        else 
        printf("%d %d %d", B, C, A);
    }
    if ((A > B) && (A < C) || ((A < B) && (A > C))){
        printf("Valor %d maior que %d e valor %d menor que %d", A, B, A, c);
    }
    else{ 
    printf("Ordem correta");
    }
 return 0;
}

