//5���� ������ �Է¹޾� �迭�� ������ ��, �� �� Ȧ���� ������ ���ϰ� �ϴ� �ڵ�
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