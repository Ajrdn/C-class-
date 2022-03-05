//입력받은 간격만큼의 왼쪽 아래로 향하는 대각선을 담고 있는 입력받은 크기 만큼의 정사각형을 출력하게 하는 코드
#include <stdio.h>
int main ()
{
	int i, j, n, k;
	scanf ("%d %d", &n, &k);
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			if (i == 1 || i == n || j == 1 || j == n)
				printf ("*");
			else if ((i + j - 1) % k == 0)
				printf ("*");
			else
				printf (" ");
		}
		puts("");
	}
	return 0;
}