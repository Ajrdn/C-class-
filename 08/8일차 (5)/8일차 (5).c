//입력된 알파벳에 따라 알맞는 채소를 출력하게 하는 코드
#include <stdio.h>
int main ()
{
   char a;
   printf ("알파뱃을 입력해주세요 : ");
   scanf ("%c", &a);
   switch(a)
   {
      case 'A' : printf ("apple\n");
      break;
      case 'B' : printf ("banana\n");
      break;
      case 'C' : printf ("carrot\n");
      break;
      default : printf ("I Love Vegetable\n");
   }
   return 0;
}