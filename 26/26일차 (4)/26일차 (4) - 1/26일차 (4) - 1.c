//포인터를 이용해 배열 속 문자열 속 입력받은 a번지부터 b번지까지의 부분문자열을 출력하게 하는 코드
#include <stdio.h>
#include <stdlib.h>
 int main()
 {
    int a,b,i;
    char* str = (char*)malloc(100);
    scanf("%s",str);
    scanf("%d %d",&a,&b);
	  for (i = a - 1; i < b; i++)
		{
			printf ("%c", *(str+i));
		}
    return 0;
}