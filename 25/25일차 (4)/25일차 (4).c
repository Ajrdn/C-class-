//함수를 선언하여 1부터 입력받은 수까지 더한 값을 출력하게 하는 코드
#include <stdio.h>
long long int p(int n)
{
	int i;
	long long int a = 0;
	for (i = 1; i <= n; i++)
	{
		a += i;
	}
	return a;
}
int main()
{
	int n;
  scanf("%d", &n);
  printf("%lld\n", p(n));
}