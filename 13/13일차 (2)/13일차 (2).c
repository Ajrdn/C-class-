//자판기에 투입한 돈과 음료의 가격을 입력받아 거스름돈과 500원 개수, 100원 개수를 출력하게 하는 코드
#include <stdio.h>
int main()
{
  int a, b, r, d, q;
  printf ("자판기에 투입할 금액을 입력해주세요 : ");
  scanf ("%d", &a);
  printf ("드시고 싶으신 음료의 가격을 입력해주세요 : ");
  scanf ("%d", &b);
  r = a - b;
  d = r / 500;
  q = r % 500 / 100;
  printf ("거스름돈 : %d\n", r);
  printf ("500원 개수 : %d\n", d);
  printf ("100원 개수 : %d\n", q);
  return 0;
}