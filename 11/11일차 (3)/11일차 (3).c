//시와 분을 입력받아 30분을 뺀 시각을 출력하게 하는 코드
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