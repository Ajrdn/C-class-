//세 수 중 가장 큰 수를 출력하게 하는 코드
#include <stdio.h>
int main()
{
	int a, b, c, max;
	scanf ("%d %d %d", &a, &b, &c);
	if (a>b)
	{
	    max = a;
             }
	else
	{
	    max = b;
             }
	if (c>max)
	{
	    printf ("%d", c);
             }  
                 else
             {
                 printf ("%d", max);
	}
	return 0;
}