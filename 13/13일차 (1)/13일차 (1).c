//세 자리 정수를 입력받아 각 자릿값을 더한 값을 출력하게 하는 코드
#include <stdio.h>
int main()
{
  int n, n1, n2, n3, i, sum = 0;
  printf ("자연수 입력 : ");
  scanf ("%d", &n);
  n1 = n / 100;
  n2 = n % 100 / 10;
  n3 = n % 10;
  sum = n1 + n2 + n3;
  printf ("%d", sum);
  return 0;
}