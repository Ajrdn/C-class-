//�Լ��� �����Ͽ� �Է¹��� �⵵�� �������� �ƴ����� �Ǵ��ϰ� �ϴ� �ڵ�
#include <stdio.h>
int f(int y)
{
	if (y % 400 == 0)
		return 1;
	else if (y % 4 == 0 && y % 100 != 0)
		return 1;
	else
		return 0;
} 
int main() 
{
	int y;
	scanf ("%d", &y);
	y = f(y);
	if (y == 1)
		printf ("����");
	else
		printf ("���");
	return 0;
}