//�Լ��� �����Ͽ� �� ������ �Է¹޾� �� ���� ������ ���� ���� ȸ���̶�� YES, �ƴ϶�� NO�� ����ϰ� �ϴ� �ڵ�
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