/*exerxixio_24_vetores*/
#include <stdio.h>

 int main() 
{

int i, num, alt, alto, baixo, maior, menor;

printf("\n\tInsira os valores:\n ");

for (i=0; i<10; i++) {

scanf("%d %d", &num, &alt);

if (i == 0) {

maior = menor = alt;

alt = baixo = num;

}

else {

if (alto < alt) {

maior = alt;

alt = num;

}

if (baixo > alt) {

menor = alt;

baixo = num;

}

}

}

printf("\n aluno mais alto: %d com %d M", alto, maior);

printf("\n aluno mais baixo: %d com %d M", baixo, menor);

return 0;
}