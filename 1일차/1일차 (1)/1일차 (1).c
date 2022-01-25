//두 수 중 더 큰 수를 출력하게 하는 코드
#include <stdio.h>
int main()
{
	int a, b;
	scanf ("%d %d", &a, &b); 
	if (a>b)
	{
		printf("%d", a);
	}
	else
	{
		printf ("%d", b);
	}
	return 0;
}