//�����͸� �̿��� �迭 �� ���ڿ� �� �Է¹��� a�������� b���������� �κй��ڿ��� ����ϰ� �ϴ� �ڵ�
#include <stdio.h>
#include <stdlib.h>
 int main()
 {
    int a,b,i;
    char str[100] = "";
    fgets(str, 100, stdin);
    scanf("%d %d",&a,&b);
	  for (i = a - 1; i < b; i++)
		{
			printf ("%c", str[i]);
		}
    return 0;
}