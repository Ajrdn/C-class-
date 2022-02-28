//한 정수를 입력받아 그 정수가 3의 배수라면 1을, 아니라면 0을 출력하게 하는 코드(단, 어마어마하게 큰 값들도 계산해야 함.)
#include <stdio.h>
#include <stdlib.h>
int main() 
{
  char arr [1000];
  int i, sum = 0;
  scanf ("%s", arr);
  for (i = 0; i<strlen(arr); i++)
    {
      sum += arr[i] - '0';
    }
  printf ("%d", sum % 3? 0 : 1);
    return 0;
}