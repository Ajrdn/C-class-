//공용체를 만들어 아이디와 숫자를 출력하게 하는 코드
#include <stdio.h>
union student
{
	int id;
	int no;
} s1;
int main() 
{
	s1.id = 1517;
	printf ("%d %d\n", s1.id, s1.no);
	s1.no = 17;
	printf ("%d %d\n", s1.id, s1.no);
 	return 0;
}