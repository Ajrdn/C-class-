//�Էµ� ���ĺ��� ���� �˸´� ä�Ҹ� ����ϰ� �ϴ� �ڵ�
#include <stdio.h>
int main ()
{
   char a;
   printf ("���Ĺ��� �Է����ּ��� : ");
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