//�� �ڿ����� �Է¹޾� �Ҽ��� ��°�ڸ����� �ݿø��� ��հ��� ����ϰ� �ϴ� �ڵ�
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