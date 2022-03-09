//입력받은 문자열이 펠린드롬이면 Yes를, 아니면 No를 출력하게 하는 코드
#include <stdio.h>
#include <string.h>
int ispalandrom(char* mystr1)
{
	int len = 0, i;
	int flag = 1;
	len = strlen(mystr1);
	
	for(i = 0; i < len / 2; i++) 
	{
		if (*(mystr1+i) != *(mystr1 + len - 1 - i))
		{
			flag = 0;
			break;
		}
	}
	return flag;
}

int main()
{
	char mystr1[256];
	gets(mystr1); 
	if (ispalandrom(mystr1))
	{
		printf("Yes\n");
	}
	else 
	{
		printf("No\n");
	} 
	return 0;
}