//�Է¹��� ����ŭ�� �غ����̿� ������ ������ ���ʿ� 1���� �߰��Ǵ� �ﰢ���� ����ϰ� �ϴ� �ڵ�
#include <stdio.h>
int main() 
{
  int a, b, c;
  scanf ("%d", &a);
  for (int i = 1; i <= a; i++)
    {
      if (i == a / 2 + 1)
        printf ("*");
      else
        printf (" ");
    }
  printf ("\n");
  b = a / 2 + 2;
  c = a / 2;
  for (int i = 3; i <= a; i+=2)
    {
      for (int j = 1; j <= a; j++)
        if (c <= j && j <= b)
        printf ("*");
        else
        printf (" ");
      printf ("\n");
      b += 1;
      c -= 1;
    }
  return 0;
}