//�� �л����� �������� �Է¹޾� �ְ����� �������� ����ϰ� �ϴ� �ڵ�
#include <stdio.h>
int main() 
{
  int n, i, num, max = 0, min = 100;
  printf ("�л� ���� �Է��ϼ��� : ");
  scanf ("%d", &n);
  printf ("������ �Է��ϼ���(0 ~ 100) : ");
  for (i = 0; i < n; i++)
    {
      scanf ("%d", &num);
      if (num > max)
        max = num;
      if (num < min)
        min = num;
    }
  printf ("1���� %d��, ����� %d��\n", max, min);
}