//함수를 선언하여 입력된 두 정수 중 더 큰 값을 출력하게 하는 코드
#include <stdio.h>
int f(int a, int b)
{
    if (a>b) return a;
    else return b;
}

main() 
{
    int a, b;
    scanf ("%d %d", &a, &b);
    printf ("%d\n", f(a,b));
}