//두 실수 a, b을 입력받으면 아래 식들에 맞게 계산한 뒤, 가장 큰 값을 출력하게 하는 코드
#include <stdio.h>
int main() 
{
    double a, b, m = -0x7FFFFFFF, i, s=1;
    scanf ("%lf, %lf", &a, &b);
    if (m<a+b) m = a+b;
    if (m<a-b) m = a-b;
    if (m<b-a) m = b-a;
    if (m<a*b) m = a*b;
    if (m<a/b) m = a/b;
    if (m<b/a) m = b/a;
    for (i=0; i<a; i++)
      s *= b;
    if(m<s) m=s;
    s = 1;
    for (i=0; i<b; i++)
      s *= a;
    if (m<s) m=s;
    printf ("%lf", m);
    return 0;
}