//함수를 선언하여 입력받은 문자를 입력받은 수만큼 출력하게 하는 코드
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