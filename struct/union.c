//union.c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

union example { //union:����ü(�޸� ���� ����)
	int i;//������ 4����Ʈ
	char c; //���� 1��, 1����Ʈ
};

int main()
{
	union example v; //����ü ���� v����

	v.c = 'A';
	printf("v.c:%c  v.i:%i\n", v.c, v.i);
	
	v.i = 10000;
	printf("v.c:%c   v.i:%i\n", v.c, v.i);
}