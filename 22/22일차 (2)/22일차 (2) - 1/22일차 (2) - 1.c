//입력받은 정수에 2를 곱한 만큼의 마름모를 출력하게 하는 코드
#include <stdio.h>
int main()
{
	int i, j, n;
	scanf ("%d", &n);
	for (i = 1; i <= 2 * n; i++)
	{
		for (j = 1; j <= 2 * n; j++)
		{
			if (i <= n && i + j == n + 1)
				printf ("*");
			else if (j - i == n || i - j == n || i + j == 3 * n + 1)
				printf ("*");
			else
				printf (" ");
		}
		printf ("\n");
	}
	return 0;
}