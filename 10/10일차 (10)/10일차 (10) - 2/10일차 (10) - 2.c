//구구단을 출력하게 하는 코드
#include <stdio.h>
int main()
{
   for(int j=1; j<=9; j++)
   {
      for(int i=2; i<=9; i++)
      {
         printf("%d * %d = %2d   ", i, j, i*j);
      }
      printf("\n");
   }
}