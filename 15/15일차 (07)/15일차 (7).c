//��ǥ���� �Է¹޾� �ش� ��и��� �� ��° ��и����� �Ǵ��ϰ� �ϴ� �ڵ�
#include <stdio.h>
int main() 
{
    int x, y;
  scanf ("%d, %d", &x, &y);
  if (x>0 && y>0) printf ("�� 1��и�");
  if (x<0 && y>0) printf ("�� 2��и�");
  if (x<0 && y<0) printf ("�� 3��и�");
  if (x>0 && y<0) printf ("�� 4��и�");
    return 0;
}