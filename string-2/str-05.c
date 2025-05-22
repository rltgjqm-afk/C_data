#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>
int main()
{
	char a[11] = "KOREA";
	char b[] = "12345";

	strcat(a,b); //string.h 에 포함
	//b를 a에 연결(붙여넣는다.)
	//null 값을 제거하고 연결(공백이 없다)
	puts(a); //문자열 출력, 줄바꿈 포함
	//putstring은 문자열을 화면에 출력한 후에 커서를 다음줄로 이동한다.
	printf("%s", b);

	return 0;
}