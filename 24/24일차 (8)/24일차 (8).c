//n개의 정수만큼 입력받아 서로 크기를 비교해 그 비교 결과에 맞는 연산자를 출력하게 하는 코드
#include <stdio.h>
int main() 
{
	int i, j, temp, n, com[1001];
	scanf("%d", &n);
	for(i = 1; i <= n; i++)
	{
		scanf("%d", &com[i]);
	}
	for(i = 1; i <= n; i++)
	{  
		printf("%d: ", i);
		for(j = 1; j <= n; j++)
		{
			if (i == j)
				continue;
			else if (com[i] > com[j])
				printf("> ");
			else if (com[i] < com[j])
				printf("< ");
			else
				printf("= ");
		}
		printf("\n");
	}
	return 0;
}