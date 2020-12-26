/* Exercicio_8 */
void imprime( int mtz[][4] ) {
  int i,j;
  for (i=0;i<4;i++){
    for (j=0;j<4;j++){
        printf("[%6d]",mtz[i][j]);
    };
    printf("\n");
  };
  printf("\n");
};

 int main () 
{
  int Vl[4][4], i , j;
  
   for (i=0;i<4;i++) 
   {
     for (j=0;j<4;j++) 
     {
        Vl[i][j] = (rand() % 20) +1 ;
     }
   };
    printf("\n Matriz original\n");
    imprime(&Vl);
    for (i=0;i<4;i++) 
    {
     for (j=i+1;j<4;j++)
       Vl[i][j] = 0;
    };
    printf("\n Matriz triangular inferior\n");
    imprime(&Vl);
}



