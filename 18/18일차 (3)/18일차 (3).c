//�Լ��� ���¿� Ư¡�鿡 ���� �˰� ���ִ� �ڵ�
#include <stdio.h>
int get_num(void); // �Լ� ����
int main(void) 
{
	int result;
	result = get_num(); // �Լ� ȣ��, ��ȯ���� result�� ����
	printf ("%d", result); // ��ȯ�� ���
	return 0;
}
int get_num(void) // �Ű������� ���� ��ȯ���� �ִ�.
{
	int num; // Ű���� �Է°��� ������ ����
	scanf ("%d", &num); // Ű���� �Է�
	return num; // �Է��� �� ��ȯ
}