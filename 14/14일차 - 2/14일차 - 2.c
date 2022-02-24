//포인터의 용도를 알게 해주는 코드
#include <stdio.h>
int main() 
{
    int *p, i;
    int a[5] = {55, 78, 95, 66, 96};
    p = a;
    for (i=0; i<5; i++)
      {
        printf ("%d ", a[i]);
      }
  printf ("\n");
    for(i=0; i<5; i++)
      {
        printf ("%d ", *(p+i));
        printf ("%d ", *p+i);
      }
  printf ("\n");
    return 0;
}