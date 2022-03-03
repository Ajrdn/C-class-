//함수를 선언하여 입력받은 년도가 윤년인지 아닌지를 판단하게 하는 코드
#include <stdio.h>
int f(int y)
{
	if (y % 400 == 0)
		return 1;
	else if (y % 4 == 0 && y % 100 != 0)
		return 1;
	else
		return 0;
} 
int main() 
{
	int y;
	scanf ("%d", &y);
	y = f(y);
	if (y == 1)
		printf ("윤년");
	else
		printf ("평년");
	return 0;
}