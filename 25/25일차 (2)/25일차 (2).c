//입력받은 크기만큼 2차원 배열인 달팽이 모양의 크기가 출력되게 하는 코드
#include<stdio.h>
int main()
{
	int a[50][50], num= 0, le, re, te, be;
	int n, i, j;
	scanf("%d",&n);
	re = be = n; 
	le = te = 1;
	while (num < n * n)
	{
		for(j = le; j <= re  && num <= n * n ; j++)
			a[te][j] = ++num;
		te++;
		for(i = te;  i <= be && num <= n * n; i++)
			a[i][re] = ++num;
		re--; 
		for(j = re;  j >= le && num <= n * n; j--)
			a[be][j] = ++num;
		be--;
		for(i = be;  i >= te && num <= n * n; i--)
			a[i][le] = ++num;
		le++;
	}
	for(i = 1; i <= n; i++, puts(""))
		for(j = 1; j <= n; j++)
			printf("%d ", a[i][j]);
	return 0;
}