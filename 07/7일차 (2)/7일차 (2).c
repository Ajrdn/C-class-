//점수 계산을 하기 위한 코드
#include <stdio.h>
int main ()
{
   double r1, r2, r3, score;
   int test1, test2, suhang;
   printf ("*** 과목별 점수 계산 프로그램***\n");
   printf ("중간고사 반영비율/받은 점수를 입력해주세요 :");
   scanf ("%lf %d", &r1, &test1);
   printf ("기말고사 반영비율/받은 점수를 입력해주세요 :");
   scanf ("%lf %d", &r2, &test2);
   printf ("수행평가 반영비율/받은 점수를 입력해주세요 :");
   scanf ("%lf %d", &r3, &suhang);
   score = r1*test1+r2*test2+r3*suhang;
   if (score >= 90) printf ("A");
   else if (score >= 80) printf ("B");
   else if (score >= 70) printf ("C");
   else printf ("F");
}