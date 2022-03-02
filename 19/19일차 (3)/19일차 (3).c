//입력받은 수만큼의 높이와 밑변과 점점 1씩 감소하는 역삼각형을 출력하게 하는 코드
#include <stdio.h>
int main ()
{
	int i, j, n;
	scanf ("%d", &n);
	for (i = 1; i <= n; i++)
	{
		for (j = n; j >= 1; j--)
		{
			if (j < i)
				printf (" ");
			else
				printf ("*");
		}
		printf ("\n");
	}
	return 0;
}