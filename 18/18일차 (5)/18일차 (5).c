//함수를 선언하여 입력받은 값의 순서를 바꿔서 출력하게 하는 코드
#include <stdio.h>
void f(int *a, int *b)
{
	int t;
	t = *a;
	*a = *b;
	*b = t;
}
 main() 
{
	 int a, b;
	 scanf ("%d %d", &a, &b);
	 printf ("%d %d\n", a, b);
   f(&a, &b);
	 printf ("%d %d\n", a, b);
	return 0;
}