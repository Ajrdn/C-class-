//입력받은 수만큼의 밑변길이와 밑으로 갈수록 양쪽에 1개씩 추가되는 삼각형을 출력하게 하는 코드
#include <stdio.h>
int main() 
{
  int a, b, c;
  scanf ("%d", &a);
  for (int i = 1; i <= a; i++)
    {
      if (i == a / 2 + 1)
        printf ("*");
      else
        printf (" ");
    }
  printf ("\n");
  b = a / 2 + 2;
  c = a / 2;
  for (int i = 3; i <= a; i+=2)
    {
      for (int j = 1; j <= a; j++)
        if (c <= j && j <= b)
        printf ("*");
        else
        printf (" ");
      printf ("\n");
      b += 1;
      c -= 1;
    }
  return 0;
}