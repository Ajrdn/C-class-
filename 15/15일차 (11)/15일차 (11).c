//�Է¹��� �� �ڸ� ���� ������ ���� �ڸ��� ���� �ڸ��� �ٲٰ� 
//�� ���� 2�� ���� �� �� ���� 50���ϸ� 'GOOD'��, 50�� �ʰ��ϸ� 'OH MY GOD'�� ����ϰ� �ϴ� �ڵ�
#include <stdio.h>
int main() {
    int n, a, b, c;
    scanf ("%d", &n);
    a = n / 10;
    b = n % 10;
    c = b * 10 + a;
    c *= 2;
    if (c <= 50)
      printf ("GOOD");
    else
    {
      printf ("%d\n", c);
      printf ("OH MY GOD");
    }
    return 0;
}