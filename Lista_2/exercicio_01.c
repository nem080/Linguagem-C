 /*Exercicio_01*/
 /*Faça um programa que imprima um menu de 4 pratos na tela e uma quinta opção para sair do pro- grama. O programa deve imprimir o prato 
 solicitado. O programa deve terminar quando for escolhido a quinta opção.*/

 #include <stdio.h>
 #include <stdlib.h>

 int main()
{
 char prato1[] = "Bife a cavalo";
 char prato2[] = "Baião de dois";
 char prato3[] = "Rissoto de camarão";
 char prato4[] = "Macarronada";
 
 int opcao = 0;
 while( opcao != 5 ) {
  printf("\n\tSelecione a opção desejada!!: \n\n");
  printf("\t1 - %s\n", prato1);
  printf("\t2 - %s \n", prato2);
  printf("\t3 - %s \n", prato3);
  printf("\t4 - %s \n", prato4);
  printf("\t5- Sair \n");
 
 scanf("%d", &opcao);
  if(opcao == 5){
    break;
  }
 if (opcao == 1) {
 printf("%s \n\n", prato1);
 } else if (opcao == 2) {
 printf("%s \n\n ", prato2);
 }else if (opcao == 3) {
 printf("%s \n\n ", prato3);
 } else {
 printf("%s \n\n ", prato4);
 }
 }
 
 printf("Finalizado, volte sempre!!: %d", opcao);
 
 return 0;
}
