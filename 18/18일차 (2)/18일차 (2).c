//�Լ��� �����Ͽ� �迭 �� �� �� ���� ū ���� ���� ���� ���� ����ϰ� �ϴ� �ڵ�
#include <stdio.h>
int big(int a, int b) 
{
	if (a > b)
	return a;
	else
	return b;
}

int small(int a, int b) 
{
	if (a < b)
	return a;
	else 
	return b;
}

main( ) 
{
	int i, max, min;
  int score[10]={18, 77, 68, 54, 99, -15, 56, 97, 64, 48};
  max = score[0];
	min = score[0];
	for (i = 0; i < 10; i ++)
	{
		max = big(max, score [i]);
	}
	printf ("%d\n", max);
	for (i = 0; i < 10; i ++)
	{
		min = small(min, score [i]);
	}
	printf ("%d", min);
}