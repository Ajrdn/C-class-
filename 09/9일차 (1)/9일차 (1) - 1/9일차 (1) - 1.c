//지정된 정수들을 각 산술연산식에 따라 출력하게 하는 코드(아직 정확히 모름)
#include <stdio.h>
int a, b, c, d;
void init()
{
   a = 2, b = 3, c = 4, d = 5;
}
int main()
{
   a = ++a + ++a;
   printf ("1번 : %d\n", a);
   init();
   b = ++b - --c;
   printf ("2번 : %d\n", b);
   init();
   c = ++b / b++;
   printf ("3번 : %d\n", c);
   init();
   d = 10 % c++;
   printf ("4번 : %d\n", d);
   init();
   a = ++c + c++ + c++;
   printf ("5번 : %d\n", a);
   init();
   b = 10 + ++a;
   printf ("6번 : %d\n", b);
   init();
   c = 10 - --d;
   printf ("7번 : %d\n", c);
   init();
   c = ++a * b++;
   printf ("8번 : %d\n", c);
   return 0;
}