//두 정수의 계산기를 만들기 위한 코드
#include <stdio.h>
int main ()
{
     int a, b;
     printf ("두 수를 입력하세요 :"); 
     scanf ("%d, %d", &a, &b);
     printf ("%d + %d = %d\n", a, b, a+b);
     printf ("%d - %d = %d\n", a, b, a-b);
     printf ("%d * %d = %d\n", a, b, a*b);
     printf ("%d / %d = %.2lf\n", a, b, (double) a/b);
     printf ("%d %% %d = %d", a, b, a%b);
     return 0;
}