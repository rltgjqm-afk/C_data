#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>
int main()
{
	char a[11] = "KOREA";
	char b[] = "12345";

	strcat(a,b); //string.h �� ����
	//b�� a�� ����(�ٿ��ִ´�.)
	//null ���� �����ϰ� ����(������ ����)
	puts(a); //���ڿ� ���, �ٹٲ� ����
	//putstring�� ���ڿ��� ȭ�鿡 ����� �Ŀ� Ŀ���� �����ٷ� �̵��Ѵ�.
	printf("%s", b);

	return 0;
}