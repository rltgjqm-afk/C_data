#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
//int main(void)
//{
//	char str1[10] = "Seoul"; // �߳�����(���ڿ��϶�) �ΰ�¥�� ����ǥ
//	//���� 4�� ������ �迭������ �ʱⰪ�� �ȸ¾� ���ڰ� ����
//	char str2[3] = { 'i', 's', '\0' }; //�ϳ�¥�� ���ڸ� ���� �ϳ�¥�� ����ǥ�� �߰�ȣ
//	char str3[] = "the capital sity of Korea."; //�ʱⰪ�� �������� ���� ����� �� 
//	printf("%s %s %s\n", str1, str2, str3); //���ڿ� -> s
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