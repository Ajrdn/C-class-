//대문자를 소문자로 바꿔서 출력하게 하는 코드
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