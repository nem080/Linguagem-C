/*exercicio_vetores_21
Fac ̧a um programa que receba do usua ́rio dois vetores, A e B, com 10 nu ́meros inteiros cada. Crie um novo vetor denominado C calculando C = A - B. Mostre na tela os dados do vetor C.

*/
#include <stdio.h>


int main()
{
  int i, n;
  int vta[10];
  int vtb[10];
  int vtc[10];

  printf("\n \tInsira os numeros.\n\n");
  for (i = 0; i < 10; i++)
  {

   printf("Entre com o %dA elemento do vetor 1: " ,i+1);
   scanf("%d", &vta[i]);
     
   printf("Entre com o %dB elemento do vetor 2: ",i+1);
   scanf("%d", &vtb[i]);
 
  }

   for (n = 0; n < 10; n++)
  {
   vtc[n] = vta[n] - vtb[n];
   printf("\n a soma do %d vetor : foi: %d", n+1, vtc[n]);
   scanf("%d",&n);
   }


return 0;
  }