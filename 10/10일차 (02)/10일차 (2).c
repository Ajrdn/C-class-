//a가 10미만이라면 10이 넘을 때 까지 2를 곱해준 뒤 그 값을 출력하게 하는 함수
#include <stdio.h>
int main()
{
   int a = 1;
   while (a < 10)
   {
      a = a * 2; 
      printf ("a : %d\n", a);
   }
   return 0;
}