//세 변의 길이를 입력받아 다음 조건에 맞는지 판단 후 어떤 삼각형인지 판단하게 하는 코드
#include <stdio.h>
int main() 
{
    int a, b, c;
    scanf ("%d %d %d", &a, &b, &c);
    if (a+b>c && b+c>a && c+a>b)
    {
      if (a == b && b == c)
      printf ("정삼각형");
    else if (a == b || b == c || c == a)
      printf ("이등변삼각형");
    else if (a*a+b*b==c*c)
      printf ("직각삼각형");
    else
      printf ("삼각형");
    }
    else
      printf ("삼각형아님");
    return 0;
}