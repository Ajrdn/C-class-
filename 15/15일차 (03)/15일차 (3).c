//입력받은 년도, 월, 일을 다음과 같은 계산을 통해 나온 값의 마지막 자리가 0이면 '대박'을, 아니라면 '그럭저럭'을 출력하게 하는 코드
#include <stdio.h>
int main() {
    int y, m, d;
  scanf ("%d-%d-%d", &y, &m, &d);
  if((y-m+d) % 10 ==0)
  {
    printf ("대박");
  }
  else
  {
    printf ("그럭저럭");
  }
    return 0;
}