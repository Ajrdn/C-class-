//함수를 선언하여 한 정수를 입력받아 그 값을 뒤집어 더한 값이 회문이라면 YES, 아니라면 NO를 출력하게 하는 코드
#include <stdio.h>
int f (int a)
{
  int s = 0;
  while (a)
    {
      s = s * 10;
      s = s + (a % 10);
      a = a / 10;
    }
  return s;
}
int main() 
{
  int b, c;
  scanf ("%d", &b);
  c = b + f(b);
  if (c == f(c))
    printf ("YES\n");
  else
    printf ("NO\n");
  return 0;
}