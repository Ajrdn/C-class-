//�л� 5���� ������ �Է¹޾� �ְ������� ���������� �����ϰ� �ϴ� �ڵ�
#include <stdio.h>
int main() 
{
    int score[5];
    int i, max = 0, mia ;
    for (i=0; i<5; i++)
      {
        printf ("%d�� �л��� ���α׷��� ������ �Է��Ͻÿ�. : ", i+1);
        scanf ("%d", &score[i]);
      }
  for (i=0; i<5; i++)
    if(max < score[i])
      max = score[i];
  printf ("�ְ� ���� : %d\n", max);
  mia = max;
  for (i=0; i<5; i++)
    if(mia >= score[i])
      mia = score[i];
  printf ("���� ���� : %d\n", mia);
    return 0;
}