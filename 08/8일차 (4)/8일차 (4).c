//과목의 점수를 입력받아 성적을 산출하게 하는 코드
#include <stdio.h>
int main()
{
   int score;
   printf ("점수를 입력하세요 : ");
   scanf ("%d", &score);
   score /= 10;
   switch(score)
   {
      case 10 :
      case 9 : printf ("A\n");
      break;
      case 8 : printf ("B\n");
      break;
      case 7 : printf ("C\n");
      break;
      case 6 : printf ("D\n");
      default : printf ("E\n");
   }
   return 0;
}