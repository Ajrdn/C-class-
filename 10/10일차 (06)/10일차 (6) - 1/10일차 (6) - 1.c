//1부터 100까지 홀수만 출력하게 하는 코드
#include <stdio.h>
int main()
{
   for(int i=1; i<=100; i++)
   {
      if(i%2==1)
      {
         printf ("%d", i);
      }
   }
}