//입력받은 수가 양수라면 그 수를 출력하게 하고, 음수라면 프로그램을 종료시키게 하는 코드
#include <stdio.h>
int main()
{
   int a;
   while(1)
   {
      scanf ("%d", &a);
      if(a>0)
      {
         printf ("%d\n", a);
      }
      else
      {
         break;
      }
   }
}