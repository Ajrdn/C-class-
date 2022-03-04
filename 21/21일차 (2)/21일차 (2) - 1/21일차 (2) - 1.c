//포인터의 특징을 알게해주는 코드
#include <stdio.h>

int main()
{
	int *p = NULL; 
	int num = 15;

	p = &num;
	printf("포인터 p가 가리키는 값 : %d\n", *p);
	printf("num의 값 : %d\n\n", num);

	*p += 5;
	printf("포인터 p가 가리키는 값 : %d\n", *p);
	printf("num 값 : %d\n\n", num);

	(*p)++;
	printf("포인터 p가 가리키는 값 : %d\n", *p);
	printf("num 값 : %d\n\n", num);

	*p++;
	printf("포인터 p가 가리키는 값 : %d\n", *p);
	printf("num 값 : %d\n", num);

	return 0;
}