//소수점 아래 부분이 있는 실수를 입력받아 %.1f 나 %0.f를 사용하지 않고 둘째자리에서 반올림한 값을 입력하게 하는 코드
#include <stdio.h>
int main()
{
  double a;
  scanf ("%lf", &a);
  a = a * 10;
  a = a + 0.5;
  a = (int)a;
  a = a / 10;
  printf ("%lf", a);
  return 0;
}