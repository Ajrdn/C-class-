//입력받은 달이 속하는 계절의 이름을 출력하게 하는 코드
#include <stdio.h>
int main() 
{
  int a;
  scanf ("%d", &a);
switch(a)
{
  case 12: 
  case 1:
  case 2: printf ("winter");
    break;
  case 3: 
  case 4:
  case 5: printf ("spring");
    break;
  case 6: 
  case 7:
  case 8: printf ("summer");
    break;
  case 9: 
  case 10:
  case 11: printf ("fall");
  return 0;
}
}  