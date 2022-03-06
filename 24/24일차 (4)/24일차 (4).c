//구조체를 만들어 이와 김의 학번, 이름, 점수를 출력하게 하는 코드
#include <stdio.h>
struct student
{
	int id;
	char name[10];
	double score;
};
int main() 
{
	struct student s1 = {1101, "Lee", 95.3};
	struct student s2 = {1102, "Kim", 91.8};
	printf ("%d %s %.1lf\n", s1.id, s1.name, s1.score);
	printf ("%d\n", sizeof(s1));
	printf ("%d %s %.1lf\n", s2.id, s2.name, s2.score);
	printf ("%d", sizeof(s2));
	return 0;
}