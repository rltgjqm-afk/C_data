//#include <stdio.h>
//
//int main(void)
//{
//	int ch; //�������� ����, �ƽ�Ű�ڵ�� ���
//	ch = getchar(); //���� �ѱ��ڸ� �Է¹���
//	putchar(ch); //1���ڸ� �����
//
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char name[100];
	char address[100];

	printf("�̸��� �Է��Ͻÿ�: ");
	gets_s(name, sizeof(name)); //gets(name); �߰��� ������ �־ ����Ű ĥ������ �޴´�.
	
	printf("���� �����ϴ� �ּҸ� �Է��Ͻÿ�: ");
	gets_s(address, sizeof(address)); //gets(address);
	
	puts(name);//put - �ѱ��� ��� puts - �������� ���. ����Ҷ� �ڵ����� ���� �ٲ��.
	puts(address);

	return 0;
}