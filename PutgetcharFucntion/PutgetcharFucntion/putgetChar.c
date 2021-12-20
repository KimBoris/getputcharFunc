
#include <stdio.h>

int main(void)
{
	char ch = 0;

	ch = getchar();
	
	//변수 ch에 담긴 정보를 화면에 출력
	putchar(ch);

	//Z를 화면에 출력
	putchar('Z');

	// 'a' 입력시 콘솔에 aZ가 찍힌다.
	return 0;
}