//n개의 숫자를 알려주고, m개의 질문을 하면서 그 숫자가 있으면 1을, 없으면 0을 출력하게 하는 코드
#include <stdio.h>
int n, arr[10000001] = {0}, m, i, t;
int main ()
{
	scanf ("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf ("%d", &t);
		arr[t] = 1;
	}
	scanf ("%d", &m);
	for (i = 0; i < m; i++)
	{
		scanf ("%d", &t);
		printf ("%d ", arr[t]);
	}
	return 0;
}