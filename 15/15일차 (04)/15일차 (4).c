//세 정수를 입력받아 각각 짝수인지 홀수인지 판단하게 하는 코드
#include <stdio.h>
int main() 
{
    int a, b, c;
    scanf ("%d %d %d", &a, &b, &c);
    if(a%2 == 0)
      printf ("even\n");
    else
      printf ("odd\n");
    if(b%2 == 0)
      printf ("even\n");
    else
      printf ("odd\n");
    if(c%2 == 0)
      printf ("even\n");
    else
      printf ("odd\n");
    return 0;
}