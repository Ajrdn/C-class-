//입력하는 10개의 수 중 5의 배수가 있다면 그것만 바로 출력하게 하고, 없으면 0을 출력하게 하는 코드
#include <stdio.h>
int main() 
{
  int n, i;
  for (i = 0; i < 10; i++)
    {
      scanf ("%d", &n);
      if (n % 5 == 0)
      {
        printf ("%d", n);
        return 0;
      }
    }
  printf ("0");
    return 0;
}