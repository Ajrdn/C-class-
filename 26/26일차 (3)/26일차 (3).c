//포인터의 쓰임새를 알게 해주는 코드
#include <stdio.h>
int main() 
{
	int a;
	scanf ("%d", &a);
	int *b;
	b = &a;
	*b = *b + 20;
	printf ("%d %d", a, *b);
	return 0;
}