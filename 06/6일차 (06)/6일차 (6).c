//입력받은 단어의 각 문자를 한줄에 한 문자씩 분리해 출력하게 하는 코드
#include <stdio.h>
int main()
{
  int i;
  char a[50];
  scanf ("%s", a);
  for (i=0; a[i]!='\0'; i++)
  {
    printf ("'%c'\n", a[i]);
  }
}