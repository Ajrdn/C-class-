//a가 10미만이라면 10이 넘을 때 까지 2를 곱해주게 하는 함수
#include <stdio.h>
int main()
{
   int a = 1;
   while (a < 10)
   {
      a = a * 2;
   }
   printf ("a : %d", a);
   return 0;
}