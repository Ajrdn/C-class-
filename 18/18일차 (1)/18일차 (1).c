//�Լ��� �����Ͽ� �Է¹��� �� �� �� ���� ū ���� ����ϰ� �ϴ� �ڵ�
#include <stdio.h>
int max (int a, int b)
{
	if (a > b) return a;
	else return b;
}
main ()
{
	int a, b, c;
	scanf ("%d %d %d", &a, &b, &c);
	printf ("%d\n", max(a, max(b, c)));
}