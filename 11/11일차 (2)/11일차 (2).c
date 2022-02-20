//주어진 식에 따라 계산한 후 신출된 값이 조건에 있어 참인지 아닌지를 판단한게 하는 코드
#include <stdio.h>
int main()
{
   int r1=0, r2=0, a=3, b=4, c=5, d=6;
   r1 = a*b+c>=d && d/a-b!=0;
   r2 = d%b + ++a*c-- || c- --a>=10;
   printf ("%d \n%d", r1, r2);
   return 0;
}