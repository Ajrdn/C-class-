//������ ���� ������ ���� ���� �������� �̰� �ϴ� �ڵ�
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main ()
{
   int a, b, num;
   srand(time(NULL));
   printf ("*** ��ȣ �̱� ���α׷� ***\n");
   printf ("��ȣ�� ������ �Է��ϼ���(���۹�ȣ, ��������ȣ)\n");
   scanf ("%d %d", &a, &b);
   num = rand () % (b-a+1) + a;
   printf ("�����մϴ�! ���� ��ȣ�� %d �Դϴ�!", num);
}