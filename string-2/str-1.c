#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
//int main(void)
//{
//	char str1[10] = "Seoul"; // 쭉넣을때(문자열일때) 두개짜리 따옴표
//	//만약 4로 넣으면 배열개수와 초기값이 안맞아 한자가 나옴
//	char str2[3] = { 'i', 's', '\0' }; //하나짜리 문자를 쓸때 하나짜리 따옴표와 중괄호
//	char str3[] = "the capital sity of Korea."; //초기값이 있을때는 숫자 안적어도 됨 
//	printf("%s %s %s\n", str1, str2, str3); //문자열 -> s
//	return 0;
//}
int main()
{
	int i;
	char str[6];
	str[0] = 'K';
	str[1] = 'O';
	str[2] = 'R';
	str[3] = 'E';
	str[4] = 'A';
	for (i = 0; i < 5; i++)
	{
		printf("%c", str[i]);
	}
	return 0;
}