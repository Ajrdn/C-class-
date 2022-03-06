//5개의 정수를 입력받아 배열에 저장한 후, 그 중 홀수의 개수를 구하게 하는 코드
#include <stdio.h>
int main()
{
	int a[5] = {}, c = 0;
	for (int i = 0; i < 5; i++)
	{
		scanf ("%d", &a[i]);
		if (a[i] % 2 == 1)
			++c;
	}
	printf ("%d", c);
	return 0;
}