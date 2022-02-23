//세 자연수를 입력받아 소수점 셋째자리에서 반올림한 평균값을 출력하게 하는 코드
#include <stdio.h>
int main()
{
  double f;
  int a, b, c;
  scanf ("%d, %d, %d", &a, &b, &c);
  f = (a + b + c) / 3.0;
  f = f * 100;
  f = f + 0.5;
  f = (int)f;
  f = f / 100;
  printf ("%lf", f);
  return 0;
}