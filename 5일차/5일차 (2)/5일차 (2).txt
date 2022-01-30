//입력받은 두 정수의 합을 출력하게 하는 코드
#include <stdio.h>
int main()
{
	int a, b;
	scanf ("%d %d", &a, &b);
  long long int c = a + b;
	printf ("%lld", c);
	return 0;
}