//입력받은 두 자릿 수의 정수의 십의 자리와 일의 자리를 바꾸고 
//그 값에 2를 곱한 뒤 그 값이 50이하면 'GOOD'을, 50을 초과하면 'OH MY GOD'을 출력하게 하는 코드
#include <stdio.h>
int main() {
    int n, a, b, c;
    scanf ("%d", &n);
    a = n / 10;
    b = n % 10;
    c = b * 10 + a;
    c *= 2;
    if (c <= 50)
      printf ("GOOD");
    else
    {
      printf ("%d\n", c);
      printf ("OH MY GOD");
    }
    return 0;
}