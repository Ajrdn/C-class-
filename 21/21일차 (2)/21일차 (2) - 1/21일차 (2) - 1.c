//�������� Ư¡�� �˰����ִ� �ڵ�
#include <stdio.h>

int main()
{
	int *p = NULL; 
	int num = 15;

	p = &num;
	printf("������ p�� ����Ű�� �� : %d\n", *p);
	printf("num�� �� : %d\n\n", num);

	*p += 5;
	printf("������ p�� ����Ű�� �� : %d\n", *p);
	printf("num �� : %d\n\n", num);

	(*p)++;
	printf("������ p�� ����Ű�� �� : %d\n", *p);
	printf("num �� : %d\n\n", num);

	*p++;
	printf("������ p�� ����Ű�� �� : %d\n", *p);
	printf("num �� : %d\n", num);

	return 0;
}