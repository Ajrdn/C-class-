//주어진 식에 따라 계산한 후 신출된 값이 조건에 있어 참인지 아닌지를 판단한게 하는 코드
#include <stdio.h>
int main()
{
   int a=0, b=0;
   a = 3>1 && 5!=5;
   b = 2==1 || 10>=10;
   printf ("%d \n%d", a, b);
   return 0;
}