#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i = 10;
	char c = 69; //�ƽ�Ű�ڵ� E �� ������ ����
	float f = 12.3; //�Ǽ��� ������ 12.3 ����
	printf("i�� ��: %d\n", i);      // ���� i�� �ּ� ���
	printf("c�� ��: %c\n", c);      // ���� c�� �ּ� ���
	printf("f�� ��: %f\n", f);      // ���� f�� �ּ� ���

	//%p�� �����͸� �ǹ�, �ּ� ������
	printf("i�� �ּ�: %p\n", &i);      // ���� i�� �ּ� ���
	printf("c�� �ּ�: %p\n", &c);      // ���� c�� �ּ� ���
	printf("f�� �ּ�: %p\n", &f);      // ���� f�� �ּ� ���
	return 0;
}