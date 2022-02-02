//세 정수를 입력받아 한 자릿수는 앞에 0을 붙여 출력하게 하는 코드
#include <stdio.h>
int main()
{
  int a, b, c;
  scanf ("%d.%d.%d", &a, &b, &c);
  printf ("%02d.%02d.%02d", a, b, c);
  return 0;
}