//포인터의 특징을 알게해주는 코드
#include <stdio.h>
int main()
{
	int arr[5] = {10, 20, 30, 40, 50};
	printf("%d\n", (arr[1]));
    printf("%d\n", *(arr + 1));
    printf("%d\n", &(arr[1]));
    printf("%d\n", arr + 1);
	return 0;
}