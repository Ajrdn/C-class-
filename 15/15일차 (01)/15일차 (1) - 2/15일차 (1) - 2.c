//입력받은 문장을 거꾸로 출력하게 하는 코드
#include <stdio.h>
#include <string.h>
int main()
{
  char str[101];
  int i;
  gets(str);
  for(i=strlen(str)-1; i>=0; i--)
    {
      printf ("%c", str[i]);
    }
}