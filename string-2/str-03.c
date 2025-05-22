//#include <stdio.h>
//
//int main(void)
//{
//	int ch; //정수형에 주의, 아스키코드로 기억
//	ch = getchar(); //글자 한글자를 입력받음
//	putchar(ch); //1문자를 출력함
//
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char name[100];
	char address[100];

	printf("이름을 입력하시오: ");
	gets_s(name, sizeof(name)); //gets(name); 중간에 공백이 있어도 엔터키 칠때까지 받는다.
	
	printf("현재 거주하는 주소를 입력하시오: ");
	gets_s(address, sizeof(address)); //gets(address);
	
	puts(name);//put - 한글자 출력 puts - 여러글자 출력. 출력할때 자동으로 줄이 바뀐다.
	puts(address);

	return 0;
}