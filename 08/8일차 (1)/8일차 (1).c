//å�� �� �� ���� �뵷�� ����ϰ� �ϴ� �ڵ�
#include <stdio.h>
main ()
{
   int money, book;
   printf ("�����ϰ� ������ å�� ������ �Է����ּ��� : \n");
   scanf ("%d", &book);
   printf ("���� ������ ��� ������ �Է����ּ���  : \n");
   scanf ("%d", &money);
   if (money >= book)
   {
      printf ("å�� �����Ͻ� �� �ֽ��ϴ�. ���� ������ %d�� �Դϴ�.\n", money - book);
   }
   else
   {
      printf ("�� å�� ������ �� �����ϴ�.");
   }
return 0;
}