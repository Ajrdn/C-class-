//n*n 배열 구조에서 첫번째 행에선 n, n-1.... 두번째 행에선 n*2, n*2-1....을 출력하게 하는 코드
#include <stdio.h>
int main() 
{
	int a[100][100] = {0}, num = 1, n;
	scanf ("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			a[i][j] = num;
			num += 1;
		}
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = n; j >= 1; j--)
		{
			printf ("%d ", a[i][j]);
		}
		printf ("\n");
	}
	return 0;
}