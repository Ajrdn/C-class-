//1���� 10������ �� �� 2�� ������� �ո� ����ϰ� �ϴ� �ڵ�
#include <stdio.h>
int main() 
{
  int i, a, sum = 0;
  a = 10;
  for (i = 1; i <= a; i ++)
    {
      if (i % 2 == 0)
        sum += i;
    }
  printf ("%d", sum);
    return 0;
}