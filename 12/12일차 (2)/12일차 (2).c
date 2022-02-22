//학생 5명의 성적를 입력받아 최고점수와 최저점수를 산출하게 하는 코드
#include <stdio.h>
int main() 
{
    int score[5];
    int i, max = 0, mia ;
    for (i=0; i<5; i++)
      {
        printf ("%d번 학생의 프로그래밍 성적을 입력하시오. : ", i+1);
        scanf ("%d", &score[i]);
      }
  for (i=0; i<5; i++)
    if(max < score[i])
      max = score[i];
  printf ("최고 점수 : %d\n", max);
  mia = max;
  for (i=0; i<5; i++)
    if(mia >= score[i])
      mia = score[i];
  printf ("최저 점수 : %d\n", mia);
    return 0;
}