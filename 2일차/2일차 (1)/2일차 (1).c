//1234가 짝수라면 "짝수"를, 홀수라면 "홀수"를 출력하게 하는 코드
#include <stdio.h>
int main()
{
    int a = 1234;
    if(a % 2 == 0)
    {
        printf("짝수");
    }
    else
   {
       printf("홀수");
   }
   return 0;
}