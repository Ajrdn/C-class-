//정수를 입력받아 그 정수에 맞는 수열의 값에 10009로 나눈 나머지를 출력하게 하는 코드
#include <stdio.h>
int a[201];
int f(int n)
{
	if (a[n]) return a[n];
  if (n <= 2)
		return 1;
	a[n] = (f(n-1) + f(n-2)) % 10009;
  return f(n-1) + f(n-2);
}
int main()
{   
	int n;
    scanf("%d", &n);
    printf("%d", f(n));
    return 0;
}