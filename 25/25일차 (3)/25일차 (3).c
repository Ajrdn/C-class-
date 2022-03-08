//함수를 선언하여 입력받은 정수의 약수의 개수를 출력하게 하는 코드
#include <stdio.h>
int f(int n)
{
	int a = 0;
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			a += 1;
		}
	}
	return a;
}
int main()
{ 
	int n;
  scanf("%d",&n);
  printf("%d\n", f(n));
}