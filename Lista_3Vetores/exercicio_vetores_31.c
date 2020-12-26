/*exercicio_vetores_31*/
#include <stdio.h>
#include <stdlib.h>

void le_array(int arr[], int tam, char *texto){
    for(int i = 0; i < 10; i++){
        printf("Digite um valor para o %s[%d]:", texto, i);
        scanf("%d",&arr[i]);
    }
    printf("\n");
}

int existe(int arr[], int tam, int val){
    for (int i = 0; i < tam; ++i) {
        if (arr[i] == val){
            return 1;
        }
    }
    return 0;
}

int main() {
    int vetorA[10], vetorB[10], vetorAB[20];
    int ate = 0;

    le_array(vetorA, 10, "vetorA");
    le_array(vetorB, 10, "vetorB");
    for(int v = 0; v < 10; v++){
        if (!existe(vetorAB, ate, vetorA[v])){
            vetorAB[ate++] = vetorA[v];
        }
    }
    for(int v = 0; v < 10; v++){
        if (!existe(vetorAB, ate, vetorB[v])){
            vetorAB[ate++] = vetorB[v];
        }
    }

    for(int u = 0; u < ate; u++){
        printf("%d ", vetorAB[u]);
    }
    return 0;
}