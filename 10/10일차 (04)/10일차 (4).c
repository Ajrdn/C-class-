//a*2를 무조건 실행한 뒤 while문을 실행하게 하는 코드
#include <stdio.h>
int main()
{
   int a = 1;
   do
   {
      a=a*2;
   }
   while(a<10);
   {
      printf ("a : %d\n", a);
   }
   return 0;
}