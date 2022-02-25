//입력받은 정수와 연산자에 따라 해당 식에 맞게 값을 출력하게 하는 코드
#include <stdio.h>
int main() {
    int a, b;
    char c;
    scanf ("%d %c %d", &a, &c, &b);
    switch (c)
    {
      case '+' : printf ("%d + %d = %d", a, b, a+b); break;
      case '-' : printf ("%d - %d = %d", a, b, a-b); break;
      case '*' : printf ("%d * %d = %d", a, b, a*b); break;
      case '/' : printf ("%d / %d = %.2f", a, b, (double)a/b); break;
    }
    return 0;
}