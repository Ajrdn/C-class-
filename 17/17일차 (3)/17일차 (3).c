//�Է��ϴ� 10���� �� �� 5�� ����� �ִٸ� �װ͸� �ٷ� ����ϰ� �ϰ�, ������ 0�� ����ϰ� �ϴ� �ڵ�
#include <stdio.h>
int main() 
{
  int n, i;
  for (i = 0; i < 10; i++)
    {
      scanf ("%d", &n);
      if (n % 5 == 0)
      {
        printf ("%d", n);
        return 0;
      }
    }
  printf ("0");
    return 0;
}