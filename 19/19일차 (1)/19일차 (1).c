//일정한 규칙이 있는 순서의 기부금이 있을 때, 순서번호 2개를 입력받으면 그 순서번호에 맞는 기부금의 합을 출력하게 하는 코드
#include <stdio.h>
int main()
{
	int n1, n2, sum = 0;
	scanf ("%d %d", &n1, &n2);
	if (n1 % 2 == 0)
		sum += n1 * 5;
	else
		sum += n1 / 2 + 1; 
	if (n2 % 2 == 0)
		sum += n2 * 5;
	else
		sum += n2 / 2 + 1;
	printf ("%d", sum);
}