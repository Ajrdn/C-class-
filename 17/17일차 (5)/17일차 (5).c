//�Է¹��� 16���� ���� ���� ����ϰ� �ϴ� �ڵ�
#include <stdio.h>
int main() 
{
  int i, j, a;
  scanf ("%X", &a);
  for (i = 1; i <= 15; i++)
    {
      printf ("%X * %X = %X\n", a, i, a*i);
    }
    return 0;
}