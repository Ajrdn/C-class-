//����Լ��� �̿��� �Է¹��� ���� ���̿� �غ��� ���� �ﰢ���� ����ϰ� �ϴ� �ڵ�
#include <stdio.h>
void star(int k)
{
	if (k == 0) return;
	printf("*");
	star(k - 1);
	
}
void lprint(int n, int k)
{
	if (n == 0) return;
    star(k);
	printf("\n");
	lprint(n - 1, k + 1);
}

int main()
{
	int n, k = 1;
	scanf("%d",&n);
	lprint(n,k);
	return 0;
}