//���� ����� �ϱ� ���� �ڵ�
#include <stdio.h>
int main ()
{
   double r1, r2, r3, score;
   int test1, test2, suhang;
   printf ("*** ���� ���� ��� ���α׷�***\n");
   printf ("�߰���� �ݿ�����/���� ������ �Է����ּ��� :");
   scanf ("%lf %d", &r1, &test1);
   printf ("�⸻��� �ݿ�����/���� ������ �Է����ּ��� :");
   scanf ("%lf %d", &r2, &test2);
   printf ("������ �ݿ�����/���� ������ �Է����ּ��� :");
   scanf ("%lf %d", &r3, &suhang);
   score = r1*test1+r2*test2+r3*suhang;
   if (score >= 90) printf ("A");
   else if (score >= 80) printf ("B");
   else if (score >= 70) printf ("C");
   else printf ("F");
}