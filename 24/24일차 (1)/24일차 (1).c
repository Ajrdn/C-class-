//�Լ��� �����Ͽ� 4���� ���� ���¸� �Է¹޾� �´� ���� ���¸� ����ϰ� �ϴ� �ڵ�
#include <stdio.h>
int f (int a, int b, int c, int d)
{
  return a+b+c+d;
}
int main() 
{
  int a, b, c, d;
  printf ("4���� �U�� ���¸� �Է��ϼ���.\n");
  printf ("(0 : ���������� ���� ����, 1 : �������� ����) : ");
  scanf ("%d %d %d %d", &a, &b, &c, &d);
  switch (f(a,b,c,d))
    {
      case 1 : printf ("��\n");
      break;
      case 2 : printf ("��\n");
      break;
      case 3 : printf ("��\n");
      break;
      case 4 : printf ("��\n");
      break;
      default : printf ("��");
    }
  return 0;
}