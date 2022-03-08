//입력된 문자열에서 쉼표를 기준으로 앞에 수로 된 문자를 정수로 변환하여 출력하게 하는 코드
#include <stdio.h>
#include <string.h>
int main() 
{
	char str[101];
	int num=0, i;
            scanf ("%s", str);
	for(i = 0; i < strlen(str); i++)
	{
		if (str[i] == ',') 
                         {
			printf("%d\n", num);
			num = 0 ;
			continue;
		}	
		num = num * 10 + (str[i] - '0');
	}
	printf("%d\n", num);
	return 0;
}