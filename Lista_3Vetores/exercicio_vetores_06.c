/* exercicio_06_vetores */
#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, maior=0, menor=0;
    float vet[10];

    printf("\nDigite os valores para sabermos quias são os maiores e menores\n\n");

    for (i = 0; i < 10; i++){
      printf("%d Numero: ", i+1);
      scanf("%f", &vet[i]);
      if(i==0){maior = vet[i]; menor = vet[i];}
      if(vet[i] > maior){
        maior = vet[i];
      }
      else{
        if(vet[i] < menor){
            menor = vet[i];
        }
      }
    }
    printf("\nO maior valor é %d\n", maior);
    printf("\nE o menor valor é %d\n\n", menor);
  
    return 0;
}
