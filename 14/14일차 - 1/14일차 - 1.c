//포인터의 용도를 알게 해주는 코드
#include <stdio.h>
int main() 
{
    int *p;
    int a;
    scanf ("%d", &a);
    p = &a;
    printf ("%d\n", *p);
    printf ("%d %d\n", p, &a);
    return 0;
}