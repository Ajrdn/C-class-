//1부터 10까지의 수 중 2의 배수들의 합를 출력하게 하는 코드
#include <stdio.h>
int main() 
{
  int i, a, sum = 0;
  a = 10;
  for (i = 1; i <= a; i ++)
    {
      if (i % 2 == 0)
        sum += i;
    }
  printf ("%d", sum);
    return 0;
}