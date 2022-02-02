//지정된 정수 사이의 범위 수를 무작위로 뽑게 하는 코드
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main ()
{
   int a, b, num;
   srand(time(NULL));
   printf ("*** 번호 뽑기 프로그램 ***\n");
   printf ("번호의 범위를 입력하세요(시작번호, 마지막번호)\n");
   scanf ("%d %d", &a, &b);
   num = rand () % (b-a+1) + a;
   printf ("축하합니다! 뽑힌 번호는 %d 입니다!", num);
}