//함수를 선언하여 입력된 두 정수를 함수 속 식에 맞게 계산하여 값을 출력하게 하는 코드
#include <stdio.h>
int f(int a, int b)
{
	if (a>b) return a;
	else return b;
}
int add(int a, int b)
{
	return a+b;
}
int sub(int a, int b)
{
	if(a>b) return a-b;
	else return b-a;
}
main() 
{
	int n1, n2;
	scanf ("%d %d", &n1, &n2);
	printf ("%d\n", f(n1,n2));
	printf ("%d\n", add(n1,n2));
	printf ("%d\n", sub(n1,n2));
}