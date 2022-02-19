//*을 한 줄에 하나씩 증가시켜 5번째 줄까지 출력하게 하는 코드
#include <stdio.h>
int main()
{
   for(int i=1; i<=5; i++)
   {
      for(int j=1; j<=i; j++)
      {
         printf("*");
      }
   printf("\n");
   }
}