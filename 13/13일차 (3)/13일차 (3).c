//�Ҽ��� �Ʒ� �κ��� �ִ� �Ǽ��� �Է¹޾� %.1f �� %0.f�� ������� �ʰ� ��°�ڸ����� �ݿø��� ���� �Է��ϰ� �ϴ� �ڵ�
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