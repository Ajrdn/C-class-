//입력받은 문장을 거꾸로 출력하게 하는 코드
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