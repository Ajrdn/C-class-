//공이 날아간 거리가 50이상 60이하 인지 판단하게 하는 코드
#include <stdio.h>
main()
{
   float a;
   printf ("공이 날아간 거리를 입력하세요 : ");
   scanf ("%f", &a);
   if (a >= 50 && a<=60)
   {
      printf ("WIN!!!");
   }
   else
   {
      printf ("LOSE...");
   }
return 0;
}