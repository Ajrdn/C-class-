//������ �������� �� �������Ŀ� ���� ����ϰ� �ϴ� �ڵ�(���� ��Ȯ�� ��)
#include <stdio.h>
int a, b, c, d;
void init()
{
   a = 2, b = 3, c = 4, d = 5;
}
int main()
{
   a = ++a + ++a;
   printf ("1�� : %d\n", a);
   init();
   b = ++b - --c;
   printf ("2�� : %d\n", b);
   init();
   c = ++b / b++;
   printf ("3�� : %d\n", c);
   init();
   d = 10 % c++;
   printf ("4�� : %d\n", d);
   init();
   a = ++c + c++ + c++;
   printf ("5�� : %d\n", a);
   init();
   b = 10 + ++a;
   printf ("6�� : %d\n", b);
   init();
   c = 10 - --d;
   printf ("7�� : %d\n", c);
   init();
   c = ++a * b++;
   printf ("8�� : %d\n", c);
   return 0;
}