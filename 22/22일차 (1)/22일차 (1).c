//입력받은 정수만큼의 높이와 오른쪽으로 향하는 별계단을 출력하게 하는 코드
#include <stdio.h>
int main() 
{
  int a, c = 0;
  scanf ("%d", &a);
  for (int i = 1; i <= a; i++)
    {
      for (int j = 1; j <= c; j++)
        {
          printf (" ");
        }
      printf ("**\n");
      ++c;
    }
  return 0;
}