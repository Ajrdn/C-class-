//�Լ��� �����Ͽ� �Է¹��� ���ڸ� �Է¹��� ����ŭ ����ϰ� �ϴ� �ڵ�
#include <stdio.h>
void print_char(char ch, int count);   
int main(void)
{
	char c; int d;
  scanf ("%c %d", &c, &d);
  print_char(c, d);                                     
	return 0;
}
void print_char(char ch, int count)     
{
	int i;
	for (i = 0; i < count; i++)
	{
		printf ("%c", ch);
	}
}