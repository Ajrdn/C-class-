//입력받은 문장에서 대문자를 소문자로, 소문자를 대문자로 바꿔서 출력하게 하는 코드
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