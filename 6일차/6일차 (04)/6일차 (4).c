//각각 6자리의 정수와 7자리의 정수를 입력받아 출력하게 하는 코드
#include <stdio.h>
int main()
{
  int a, b;
  scanf ("%d-%d", &a, &b);
  printf ("%06d%07d", a, b);
}