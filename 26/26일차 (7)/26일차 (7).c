//입력받은 문자열을 복사하여 출력하게 하는 코드
#include <stdio.h>
void mystrcpy(char str2[], char str1[])
{
	int i = 0;
	while(*(str1+i)) 
	{
	   *(str2+i)= *(str1+i);
	    i++;
	}
	*(str2+i) = '\0';
}

void mystrcpy2(int* str3, int* str1)
{
	while(*str1)
	{
		*str3++ = *str1++;
	}
	*str3 = '\0';
}

int main() {
	char str1[256],	str2[256], str3[256];
	gets(str1);

	mystrcpy(str2, str1);
	puts(str2);
	
	mystrcpy2(str3, str1);
	puts(str3);

	return 0;
}