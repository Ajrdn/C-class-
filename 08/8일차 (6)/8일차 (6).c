//3개의 터널의 높이와 트럭의 높이를 입력받아 트럭이 터널을 통과가 가능한지 여부를 알려주게 하는 코드
#include <stdio.h>
int main ()
{
   int u, a, b, c;
   printf ("트럭의 높이를 입력해 주세요 : \n");
   scanf ("%d", &u);
   printf ("첫번째 터널의 높이를 입력해 주세요 : \n");
   scanf ("%d", &a);
   printf ("두번째 터널의 높이를 입력해 주세요 : \n");
   scanf ("%d", &b);
   printf ("세번째 터널의 높이를 입력해 주세요 : \n");
   scanf ("%d", &c);
   if (a>u)
   {
      printf ("첫번째 터널 통과!\n");
      if (b>u)
      {
         printf ("두번째 터널 통과!\n");
        if (c>u)
        {
           printf ("세번째 터널 통과!\n모든 터널을 통과했습니다!");
        }
        else
        {
           printf ("세번째 터널은 통과할 수 없습니다.");
         }
      }
      else
      {
         printf ("두번째 터널은 통과할 수 없습니다.");
      }
   }
   else
   {
      printf ("첫번째 터널부터 통과할 수 없습니다.");
   }
   return 0;
}