//������ ������ �Է¹޾� ������ �����ϰ� �ϴ� �ڵ�
#include <stdio.h>
int main()
{
   int score;
   printf ("������ �Է��ϼ��� : ");
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