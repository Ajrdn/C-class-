//�Է¹��� ������ �����ڿ� ���� �ش� �Ŀ� �°� ���� ����ϰ� �ϴ� �ڵ�
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