//�Է¹��� ������ 0�� �ƴ϶�� ��� �Է¹ް�, 0�̶�� ���� �����ϰ� �ϴ� �ڵ�
#include <stdio.h>
int main() 
{
    int n;
input:
    scanf ("%d", &n);
    if (n != 0)
    {
      printf ("%d\n", n);
      scanf (" ");
      goto input;
    }
    if (n == 0) return -1;
    return 0;
}