//1���� 100���� ����� �� 1���� 100���� ���� ���� ���ϰ� �ϴ� �ڵ�
#include <stdio.h>
int main()
{
   int i, sum = 0;
   for(i=1; i<=100; i++)
   {
      printf("%d\n", i);
      sum += i;
   }
   printf("1���� 100���� ���� ���� %d�Դϴ�.", sum);
}