//�Է¹��� ũ�⸸ŭ 2���� �迭�� ������ ����� ũ�Ⱑ ��µǰ� �ϴ� �ڵ�
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