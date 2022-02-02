//입력받은 문장의 각 문장을 한줄에 한 문자씩 분리해 출력하게 하는 코드
#include <stdio.h>
int main()
{
  int i;
  char a[100];
  fgets (a, 100, stdin);
  for (i=0; a[i]!='\0'; i++)
  {
    printf ("'%c'\n", a[i]);
  }
}