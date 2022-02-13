//세 변의 길이를 입력받아 삼각형을 만들 수 있는지 알려주게 하는 코드
#include <stdio.h>
main ()
{
   int a, b, c;
   printf ("첫번째 변의 길이를 입력하세요 : ");
   scanf ("%d", &a);
   printf ("두번째 변의 길이를 입력하세요 : ");
   scanf ("%d", &b);
   printf ("세번째 변의 길이를 입력하세요 : ");
   scanf ("%d", &c);
   if (a < b + c && b < c + a && c < a + b)
   {
      printf ("삼각형을 만들 수 있습니다.");
   }
   else
   {
      printf ("삼각형을 만들 수 없습니다.");
   }
return 0;
}