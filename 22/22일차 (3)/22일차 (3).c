//�Է¹��� ���ݸ�ŭ�� ���� �Ʒ��� ���ϴ� �밢���� ��� �ִ� �Է¹��� ũ�� ��ŭ�� ���簢���� ����ϰ� �ϴ� �ڵ�
#include <stdio.h>
int main ()
{
	int i, j, n, k;
	scanf ("%d %d", &n, &k);
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			if (i == 1 || i == n || j == 1 || j == n)
				printf ("*");
			else if ((i + j - 1) % k == 0)
				printf ("*");
			else
				printf (" ");
		}
		puts("");
	}
	return 0;
}