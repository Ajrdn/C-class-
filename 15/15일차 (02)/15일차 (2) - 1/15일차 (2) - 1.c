//입력된 문자열에서 c/C와 cc/CC/cC/Cc의 개수를 출력하게 하는 코드
#include <stdio.h>
int main()
{
  char S[101];
  int i, c = 0, cc = 0;
  printf ("100자 이내의 문자열을 입력하시오. : ");
  scanf ("%s", S);
  for(i = 0; i<=100; i++)
    {
      if(S[i] == 'c' || S[i] == 'C')
      {
        c += 1;
        if(S[i+1] == 'c' || S[i+1] =='C')
        {
          cc += 1;
        }
      }
    }
  printf ("C의 개수는 : %d\n", c);
  printf ("CC의 개수는 : %d\n", cc);
} 