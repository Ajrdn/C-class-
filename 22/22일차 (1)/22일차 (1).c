//�Է¹��� ������ŭ�� ���̿� ���������� ���ϴ� ������� ����ϰ� �ϴ� �ڵ�
#include <stdio.h>
int main() 
{
  int a, c = 0;
  scanf ("%d", &a);
  for (int i = 1; i <= a; i++)
    {
      for (int j = 1; j <= c; j++)
        {
          printf (" ");
        }
      printf ("**\n");
      ++c;
    }
  return 0;
}