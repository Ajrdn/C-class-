//입력받은 수만큼의 가로높이와 왼쪽으로 갈수록 양쪽에 1개씩 추가되는 삼각형을 출력하게 하는 코드
#include <stdio.h>
int main ()
{
	int i, j, n;
	scanf ("%d", &n);
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf ("*");
		}
		printf ("\n");
	}
	for (i = n-1; i >= 1; i--)
	{
		for (j = 1; j <= i; j++)
		{
			printf ("*");
		}
		printf ("\n");
	}
	return 0;
}