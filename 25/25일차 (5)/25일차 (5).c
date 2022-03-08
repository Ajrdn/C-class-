//이차원 배열을 이용하여 입력받은 두 수의 크기만큼의 모양으로 숫자들를 대각선으로 출력하게 하는 코드
#include <stdio.h>
int arr[201][201] = {0};
int main(){
	int i, j, k, n, m, num = 1;
	scanf("%d %d",&n, &m);
	k = 2;
   	for(k = 2; k <= n + m; k++)
		{
		for(j = 1; j <= m; j++)
		{
			for(i = 1; i <= n; i++)
			{
				if(i + j == k) 
				{
					arr[i][j] = num;
					num++;
				}
			}
		}
	}
	for(i = 1 ; i <= n; i++)
	{
		for(j = 1; j <= m; j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
				
	}	
	return 0;
}