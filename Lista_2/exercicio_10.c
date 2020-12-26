/* exercicio_10*/
#include <stdio.h>
#include <stdlib.h>

 int main() 
{
 int x = 5+5, y = 0; 

  do 
 {
   y = (x % 2) + 10 * y;
   x = x / 2;
   printf("\n\tx = %d,\t y = %d\n", x, y );
 }  while (x != 0); while (y != 0) 
  {
    x = y % 100;
    y = y / 10;
    printf("\n\tx = %d,\t y = %d\n", x, y );
  } 
  return 0;
}