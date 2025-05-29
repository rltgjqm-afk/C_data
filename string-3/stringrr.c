#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	char ex[4][5] = {   //肮荐父 蝶咙
		"abc", //0青
		"xyz", //1青
		"kkkk", //2青
		"love" //3青
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