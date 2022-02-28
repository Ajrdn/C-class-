//입력받은 16진수 값의 단을 출력하게 하는 코드
#include <stdio.h>
int main() 
{
  int i, j, a;
  scanf ("%X", &a);
  for (i = 1; i <= 15; i++)
    {
      printf ("%X * %X = %X\n", a, i, a*i);
    }
    return 0;
}