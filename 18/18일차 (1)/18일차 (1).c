//함수를 선언하여 입력받은 세 수 중 가장 큰 값을 출력하게 하는 코드
#include <stdio.h>
int max (int a, int b)
{
	if (a > b) return a;
	else return b;
}
main ()
{
	int a, b, c;
	scanf ("%d %d %d", &a, &b, &c);
	printf ("%d\n", max(a, max(b, c)));
}