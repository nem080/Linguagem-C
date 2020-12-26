
/*exerxixio_36_vetores*/
#include <stdlib.h>
#include <stdio.h>
    int main()
{
    int vt[10];
    int i, j, tmp;

        printf("\n\n");
        for (i = 0; i < 10; i++)
        {  
        printf("Digite um numero: ");
        scanf("%d", &vt[i]);
        }
    

    for (i = 0; i < 10; i++)
        for(j = i + 1; j < 10;j++)
        {
            if (vt[i] > vt[j])
            {
                tmp = vt[i];
                vt[i] = vt[j];
                vt[j] = tmp;
            }
        }

    printf("\n");
    printf("Vetor em ordem crescente:\n ");
        for(i = 0; i < 10; i++)
            printf(" %d",vt[i]);
      printf("\n");
}