//�Է¹��� ������ �Ųٷ� ����ϰ� �ϴ� �ڵ�
#include <stdio.h>
int main()
{
  char str[101] = {};
  int i;
  fgets(str, 101, stdin);
  for(i=101; i>=0; i--)
    {
      printf ("%c", str[i]);
    }
} 