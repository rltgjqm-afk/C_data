#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	char ex[4][5] = {   //������ ����
		"abc", //0��
		"xyz", //1��
		"kkkk", //2��
		"love" //3��
	};

	printf("%c\n", ex[1][2]);
	printf("%c\n", ex[3][3]);
	printf("%s\n", ex[1]);
	scanf_s("%c", &ex[0][3]);
	printf("%c\n", ex[0][3]);
	printf("%s\n", ex[0]);
	scanf_s("%s", &ex[2], 5);
	printf("%s\n", ex[2]);

	return 0;
}