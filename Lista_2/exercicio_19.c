 /*exercicio_19*/
 #include <stdio.h>
 int main()
{
 int num, par=0, imp=0;
 float res;

 do{
   
   printf("\nInsira os numero q deseja jogar: ");
   printf("\nPara encerra aperte o zero 0 : ");
   scanf("%d",&num);
   
    if(num!=0)
    {  
       
       res=num%2;        
       if(res==0)
     {
        par++;
     }
       else 
      {
        imp++;
      }
    }
      }while((num!=0));
       
      printf("Pares -> %d\n", par); 
      printf("Impares -> %d\n", imp); 
}