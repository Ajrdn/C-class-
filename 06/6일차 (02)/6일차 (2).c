//문자열을 입력받아 각각 4자리와 3자리 중 2자리까지 출력하게 하는 코드
#include <stdio.h>
int main()
{
	char a[50];
	scanf ("%s", a);
	printf ("%.4s\n", a);
	printf ("%3.2s", a);
	return 0;
}