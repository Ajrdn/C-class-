//�Լ��� �����Ͽ� �Է¹��� ������ ����� ������ ����ϰ� �ϴ� �ڵ�
#include <stdio.h>
int f(int n)
{
	int a = 0;
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			a += 1;
		}
	}
	return a;
}
int main()
{ 
	int n;
  scanf("%d",&n);
  printf("%d\n", f(n));
}