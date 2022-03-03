//함수를 선언하여 배열 속의 값을 오름차순으로 정리해서 출력하게 하는 코드
#include <stdio.h>
void exchange(int *a, int *b)
{
	int t;
	t = *a;
	*a = *b;
	*b = t;
}
main() 
{
	int A[5] = {66, 84, 79, 93, 48};
	int i, j;
	for (i = 0; i < 4; i++)
		for (j = i+1; j < 5; j++)
			if (A[i] > A[j])
				exchange (&A[i], &A[j]);
	for (i = 0; i < 5; i++)
		printf ("%d ", A[i]);
}