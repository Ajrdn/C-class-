//입력받은 문장에 공백은 제외하고 출력하게 하는 코드
#include <stdio.h>
int main()
{
	char a[101];
	int i;
            fgets (a,101,stdin);
	for (i=0; a[i]!='\0'; i++)
	{
		if (a[i] == ' ')
			;
		else
			printf("%c", a[i]);
	}
}