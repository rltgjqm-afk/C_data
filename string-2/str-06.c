#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>

int main(void)
{
	char key[] = "C";
	char buffer[80] = "";
	do {
		printf("�Ӻ���� ��ġ�� ���� ���� ���Ǵ� ����? ");
		gets(buffer);
	} while (strcmp(key, buffer) != 0); //���� ������ �ݺ� //���Ѵ�. //������ 0�̳���.
	//strcpy: ����(����)
	//strcat: ����
	//strcmp: ���� ��
	//str ���� �� �� string.h ���� ������.
	printf("�¾ҽ��ϴ�!");

	return 0;
}