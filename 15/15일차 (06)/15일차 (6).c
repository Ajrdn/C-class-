//�Է¹��� �⵵�� �������� �ƴ����� ����ϰ� �ϴ� �ڵ�
#include <stdio.h>
int main() 
{
    int y;
    scanf ("%d", &y);
    if (y%4==0 && y%100!=0)
      printf ("����");
    else if (y%400 == 0)
      printf ("����");
    else
      printf ("���� �ƴ�");
    return 0;
}