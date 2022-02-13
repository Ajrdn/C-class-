//책을 산 뒤 남은 용돈을 계산하게 하는 코드
#include <stdio.h>
main ()
{
   int money, book;
   printf ("구입하고 싶으신 책의 가격을 입력해주세요 : \n");
   scanf ("%d", &book);
   printf ("현재 가지고 계신 현금을 입력해주세요  : \n");
   scanf ("%d", &money);
   if (money >= book)
   {
      printf ("책을 구입하실 수 있습니다. 남은 현금은 %d원 입니다.\n", money - book);
   }
   else
   {
      printf ("이 책을 구입할 수 없습니다.");
   }
return 0;
}