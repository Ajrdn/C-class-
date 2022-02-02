//func()함수에 정적변수(static)변수를 선언하여 값을 출력하게 하는 코드
#include <stdio.h>
void func()
{
  static int a = 0;
  printf ("%d\n", a);
  a = a + 1;
}
int main()
{
    func();
    func();
    func();
    func();

return 0;
}