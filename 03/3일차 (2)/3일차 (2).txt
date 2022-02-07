//1부터 시작해서 2의 31승까지를 곱한 수를 출력하게 하는 코드
#include <stdio.h>
int main ()
{
	int i, n = 31;
  long long val = 1;
	for (i=1; i<=n; i++)
	{
	    val = val *2;
	}
	printf ("%lld", val);
	return 0;
}