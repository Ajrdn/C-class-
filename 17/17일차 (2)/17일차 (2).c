//한 정수를 입력받아 그 정수의 자릿수의 개수를 출력하게 하는 코드
#include <stdio.h>
int main() 
{
  int n, cnt = 0;
  scanf ("%d", &n);
  while (n != 0)
    {
      n = n / 10;
      ++cnt; 
    }
  printf ("%d", cnt);
    return 0;
}