//행이 홀수면 수를 +1씩, 짝수면 -1씩 계산한 값을 출력하게 하는 코드
#include <stdio.h>
int main() 
{
	int a[100][100] = {0}, num = 1, n;
	scanf ("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		if (i % 2 == 0)
		{
			for (int j = 1; j <= n; j++)
		  {
			  a[i][j] = num;
			  num += 1;
		  }
		}
		else
		{
			for (int j = n; j >= 1; j--)
		  {
			  a[i][j] = num;
			  num += 1;
		  }
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