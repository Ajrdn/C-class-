//�Էµ� ���ڿ����� ��ǥ�� �������� �տ� ���� �� ���ڸ� ������ ��ȯ�Ͽ� ����ϰ� �ϴ� �ڵ�
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