//1부터 100까지 출력한 뒤 1부터 100까지 수의 합을 구하게 하는 코드
#include <stdio.h>
int main()
{
   int i, sum = 0;
   for(i=1; i<=100; i++)
   {
      printf("%d\n", i);
      sum += i;
   }
   printf("1부터 100까지 수의 합은 %d입니다.", sum);
}