#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i = 10;
	char c = 69; //아스키코드 E 가 변수에 저장
	float f = 12.3; //실수형 변수에 12.3 저장
	printf("i의 값: %d\n", i);      // 변수 i의 주소 출력
	printf("c의 값: %c\n", c);      // 변수 c의 주소 출력
	printf("f의 값: %f\n", f);      // 변수 f의 주소 출력

	//%p는 포인터를 의미, 주소 형식자
	printf("i의 주소: %p\n", &i);      // 변수 i의 주소 출력
	printf("c의 주소: %p\n", &c);      // 변수 c의 주소 출력
	printf("f의 주소: %p\n", &f);      // 변수 f의 주소 출력
	return 0;
}