//입력받은 정수에 2를 곱한 만큼의 마름모를 출력하게 하는 코드
#include <stdio.h>
int main() 
{
  int a, b, c;
  scanf ("%d", &a);
  c = a;
  b = 1;
  for (int i = 1; i <= a; i++)
    {
      for (int j = 1, J = 1; j <= c, J <= c + b; j++, J++)
        {
          if (j == c || J == c + b)
            printf ("*");
          else
            printf (" ");
        }
      printf ("\n");
      --c;
      b+=2;
    }
  c = 1;
  b = a + a;
  for (int i = 1; i <= a; i++)
    {
      for (int j = 1, J = 1; j <= c, J <= c + b; j++, J++)
        {
          if (j == c || J == b)
            printf ("*");
          else
            printf (" ");
        }
      printf ("\n");
      ++c;
      --b;
    }
  return 0;
}