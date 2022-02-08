//입력받은 문장을 출력하게 하는 코드
#include <stdio.h>
main()
{
	char word[100];
	fgets(word, 100, stdin);
	printf ("%s", word);
}