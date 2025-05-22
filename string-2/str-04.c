
#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>

int main(void)
{
	char string[80];

	strcpy(string, "Hello world from"); //복사
	strcat(string, "strcpy ");      //끝에 붙여넣는다.
	strcat(string, "and ");
	strcat(string, "strcat! ");
    printf("string = %s\n", string);

	return 0;
}