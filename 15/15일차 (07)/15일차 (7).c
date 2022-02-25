//좌표값을 입력받아 해당 사분면이 몇 번째 사분면인지 판단하게 하는 코드
#include <stdio.h>
int main() 
{
    int x, y;
  scanf ("%d, %d", &x, &y);
  if (x>0 && y>0) printf ("제 1사분면");
  if (x<0 && y>0) printf ("제 2사분면");
  if (x<0 && y<0) printf ("제 3사분면");
  if (x>0 && y<0) printf ("제 4사분면");
    return 0;
}