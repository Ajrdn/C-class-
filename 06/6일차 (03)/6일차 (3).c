//각각 변수를 %.2f와 %.3e 형태로 출력하게 하는 코드
#include <stdio.h>
int main()
{
    float a = 3.45678f;
    double b = 0.0561214;
    printf ("[a] = %.2f [b] = %.3e", a,b);
}