//함수를 선언하여 4개의 윷의 상태를 입력받아 맞는 윷의 상태를 출력하게 하는 코드
#include <stdio.h>
int f (int a, int b, int c, int d)
{
  return a+b+c+d;
}
int main() 
{
  int a, b, c, d;
  printf ("4개의 웇의 상태를 입력하세요.\n");
  printf ("(0 : 뒤집어지지 않은 상태, 1 : 뒤집어진 상태) : ");
  scanf ("%d %d %d %d", &a, &b, &c, &d);
  switch (f(a,b,c,d))
    {
      case 1 : printf ("도\n");
      break;
      case 2 : printf ("개\n");
      break;
      case 3 : printf ("걸\n");
      break;
      case 4 : printf ("윷\n");
      break;
      default : printf ("모");
    }
  return 0;
}