//증감 연산자의 쓰임새를 알게 해주고 정수의 계산으로 생긴 실수를 출력하게 하는 코드
#include <stdio.h>
main()
{
	int a = 3, b = 2;
	printf ("%d %d\n", ++a, b--);
	a += 1; b-= 1;
	printf ("%d %d\n", a, b);
	
	printf ("%d\n", 4/3);
	printf ("%f\n", 4/3);
	printf ("%f\n", (float)4/3);
	printf ("%.2f\n", 4/3.0);
}