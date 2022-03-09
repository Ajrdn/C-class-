//사람 수를 입력받아 그 수 만큼 키의 개수를 입력받고, 그 중 가장 큰 수치를 출력하게 하는 코드
#include <stdio.h>
#include <stdlib.h>
int maxh(int* height, int n) 
{
	int i;
	int maxn = *(height);
	for(i = 1; i <n; i++) 
	{
		if (*(height + i) > maxn) 
			maxn = *(height+i);
	}
	return maxn;
}
int main()
{
    int n;
    int* height;
    int i;
	printf("처리할 인원수 : ") ;
	scanf("%d", &n) ;
	height = (int*)malloc(sizeof(int)*n);
	printf("%d명의 키를 입력하세요.\n", n);
	for(i=0; i<n; i++)
	{
		scanf("%d",  (height + i));
	}
	printf("최대값 : %d\n", maxh(height, n));
	
	free(height);
    return 0; 
}