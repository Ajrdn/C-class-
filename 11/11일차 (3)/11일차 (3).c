//�ÿ� ���� �Է¹޾� 30���� �� �ð��� ����ϰ� �ϴ� �ڵ�
#include <stdio.h>
int main()
{
   int h, m;
   scanf ("%d : %d", &h, &m);
   h=(h+24);
   m=h*60+m-30;
   printf ("%d : %d", m/60%24, m%60);
   return 0;
}