//b1과 b2의 참과 거짓의 여부를 알려주게 하는 코드
#include <stdio.h>
#include <stdbool.h>
int main ()
{
   bool b1 = false;
   bool b2 = true;
   if (b1)
   {
      printf ("b1 = 참\n");
   }
   else
   {
      printf ("b1 = 거짓\n");
   }
   if (!b2)
   {
      printf ("b2 = 거짓\n");
   }
   else
   {
      printf ("b2 = 참\n");
   }
   return 0;
}