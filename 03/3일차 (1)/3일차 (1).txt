//각 자료형의 크기를 출력하게 하는 코드
#include <stdio.h>
int main ()
{
	printf ("\n-- General Date Type Size --\n");
	printf ("int : %d\n", sizeof(int));
	printf ("char : %d\n", sizeof(char));
	printf ("short : %d\n", sizeof(short));
	printf ("long : %d\n", sizeof(long));
	printf ("double : %d\n", sizeof(double));
	printf ("long double : %d", sizeof(long double));
	return 0;
}