//�Լ��� �����Ͽ� �Էµ� �� ������ �Լ� �� �Ŀ� �°� ����Ͽ� ���� ����ϰ� �ϴ� �ڵ�
#include <stdio.h>
int f(int a, int b)
{
	if (a>b) return a;
	else return b;
}
int add(int a, int b)
{
	return a+b;
}
int sub(int a, int b)
{
	if(a>b) return a-b;
	else return b-a;
}
main() 
{
	int n1, n2;
	scanf ("%d %d", &n1, &n2);
	printf ("%d\n", f(n1,n2));
	printf ("%d\n", add(n1,n2));
	printf ("%d\n", sub(n1,n2));
}