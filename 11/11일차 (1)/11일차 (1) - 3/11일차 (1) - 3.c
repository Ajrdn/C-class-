//주어진 식에 따라 계산한 후 신출된 값이 조건에 있어 참인지 아닌지를 판단한게 하는 코드
#include <stdio.h>
int main()
{
   int i=5, j=4, k=1, L, m;
   L = i>5 || j!=0;
   m = j<=4 && k<1;
   printf ("%d, %d\n", L, m);
   return 0;
}