//while -01.c
//switch, while �̿�
//�ܾ��� 10,000 �� �ִ� �����̰�
//�Է�: �ݾ�
//���� �Է�: a�̸� �Ա�(�ܾ�+�ݾ�)
//���� �Է�: b�̸� ���(�ܾ�-�ݾ�) (�ܾ��� �ݾ� ���� ū ��� ���)
//�߸� �Է��ϸ� ���� �Է¿��� ���
//�ܾ��� ���
//���ѹݺ�-> �����ұ��? y�̸� ��. n�̸� �ݺ�.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int sum = 10000; //�ܾ� �ʱ�ȭ ���� 10000 ����
	int money; //�Ա� ��� �ݾ� �Է¹��� ����
	char gubun; //���� a/b �Է¹���.
	char end; //�����ұ��? y/n

	printf("�ݾ��� �Է��ϼ���");
	scanf("%d", &money); //�ݾ� �Է�

	printf("������ �Է��ϼ���(a:�Ա�, b:���)");
	scanf(" %c", &gubun); //���� �߰�

	switch (gubun) //������ ������ �ִ� ����
	{
	case 'a': //��� ����
		sum = sum + money;
		printf("�����ܾ��� %d\n", sum);
		break;
	case 'b':
		sum = sum - money;
		printf("�����ܾ��� %d\n", sum);
		break;
	default:
		printf("���� �Է� ����\n");
		break;
	}


	return 0;
}