#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>

int main(void)
{
	char key[] = "C";
	char buffer[80] = "";
	do {
		printf("임베디드 장치에 가장 많이 사용되는 언어는? ");
		gets(buffer);
	} while (strcmp(key, buffer) != 0); //같지 않으면 반복 //비교한다. //같으면 0이나옴.
	//strcpy: 복사(대입)
	//strcat: 연결
	//strcmp: 문자 비교
	//str 붙은 건 다 string.h 에서 가져옴.
	printf("맞았습니다!");

	return 0;
}