//�� ������ ���⸦ ����� ���� �ڵ�
#include <stdio.h>
int main ()
{
     int a, b;
     printf ("�� ���� �Է��ϼ��� :"); 
     scanf ("%d, %d", &a, &b);
     printf ("%d + %d = %d\n", a, b, a+b);
     printf ("%d - %d = %d\n", a, b, a-b);
     printf ("%d * %d = %d\n", a, b, a*b);
     printf ("%d / %d = %.2lf\n", a, b, (double) a/b);
     printf ("%d %% %d = %d", a, b, a%b);
     return 0;
}