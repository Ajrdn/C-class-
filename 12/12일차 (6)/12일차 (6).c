//�Է¹��� ���忡�� �빮�ڸ� �ҹ��ڷ�, �ҹ��ڸ� �빮�ڷ� �ٲ㼭 ����ϰ� �ϴ� �ڵ�
#include <stdio.h>
int main() 
{
  char a[101];
  int i;
  fgets (a, 101, stdin);
  for (i = 0; a[i] != '\0'; i++)
    {
      if(65 <= a[i] && a[i] <= 90)
       printf ("%c", a[i]+32);
      else if (97 <= a[i] && a[i] <= 122)
        printf ("%c", a[i]-32);
      else
        printf ("%c", a[i]);
    }
    return 0;
}