//�Էµ� ���ڿ����� c/C�� cc/CC/cC/Cc�� ������ ����ϰ� �ϴ� �ڵ�
#include <stdio.h>
int main()
{
  char S[101];
  int i, c = 0, cc = 0;
  printf ("100�� �̳��� ���ڿ��� �Է��Ͻÿ�. : ");
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
  printf ("C�� ������ : %d\n", c);
  printf ("CC�� ������ : %d\n", cc);
} 