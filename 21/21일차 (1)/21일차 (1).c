//함수를 선언하여 입력받은 두 값 중 첫번째 값이 크다면, 2번째 값과 데이터 위치를 바꿔 출력하게 하는 코드
#include <stdio.h>
int swapStudent(int *a, int *b)
{
	int temp;
	if (*a > *b)
	{
	   temp = *a;
  	   *a = *b;
	   *b = temp;
	}
}
int main()
{
	int left;
	int right;
	scanf("%d", &left);
	scanf("%d", &right);
	
	swapStudent(&left, &right);
	
	printf("왼쪽 : %d, 오른쪽 : %d", left, right);
	
	return 0;
}