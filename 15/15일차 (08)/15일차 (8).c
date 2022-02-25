//입력받은 정수가 0이 아니라면 계속 입력받고, 0이라면 강제 종료하게 하는 코드
#include <stdio.h>
int main() 
{
    int n;
input:
    scanf ("%d", &n);
    if (n != 0)
    {
      printf ("%d\n", n);
      scanf (" ");
      goto input;
    }
    if (n == 0) return -1;
    return 0;
}