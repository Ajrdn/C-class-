//�빮�ڸ� �ҹ��ڷ� �ٲ㼭 ����ϰ� �ϴ� �ڵ�
#include <stdio.h>
int main() 
{
  char a[101];
  int i;
  scanf ("%s", a);
  for (i = 0; a[i] != '\0'; i++)
    {
      printf ("%c", a[i] + 32);
    }
    return 0;
}