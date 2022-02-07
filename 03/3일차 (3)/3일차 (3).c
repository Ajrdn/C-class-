//선언되지 않은 변수가 int의 범위를 넘어서는 경우에 안정적으로 출력하게 하는 코드
#include <stdio.h>
int main ()
{
	printf ("%lld", -2147483649ll);
}