//수열의 n번째 항의 값을 구하게 하는 코드
#include <stdio.h>
int main ()
{
	int a, b, c, n, i, s; 
	scanf ("%d %d %d %d", &a, &b, &c, &n);
	for (s = a, i = 2; i <= n; i++)
	{
		s = s * b + c;
	}
	printf ("%d", s);
}