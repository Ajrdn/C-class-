//함수를 선언하여 세 몸무게를 입력받아 오름차순으로 출력하게 하는 코드
#include <stdio.h>
void f (int *a, int *b)
{
  int t;
  t = *a;
  *a = *b;
  *b = t;
}
int main() 
{
  int a, b, c;
  printf ("3사람의 몸무게를 차례로 입력하세요. : ");
  scanf ("%d %d %d", &a, &b, &c);
  if (a > b)
    f(&a, &b);
  if (b > c)
    f(&b, &c);
  if (a > b)
    f(&a, &b);
  printf ("%d %d %d\n", a, b, c);
  return 0;
}