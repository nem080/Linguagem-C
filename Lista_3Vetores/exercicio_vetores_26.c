/*exerxixio_26_vetores*/
#include <stdio.h>
#include <math.h>
 
 int main()
{
    float m, media, sig, pw;
    int vt[10];
    media = 0;
    m = 0;
    sig = 0;
    pw = 0;
    int i;
    printf("\n\nInsira os numero para o calculo.\n\n");
    for(i = 0; i < 10; i++)
    {
        printf("Digite um número: ");
        scanf("%d", &vt[i]);
    }

    for(i = 0; i < 10; i++)
    {
        m = m + vt[i];
    }

    media = m / 10.0;
    for(i = 0; i < 10; i++)
    {
        pw = pw + pow((vt[i] - media),2);
    }
    sig = sqrt(pw/(10-1));
    printf("Resultado d = %.2f\n", sig);
 
    return 0;
}