#define _CRT_SECURE_NO_WARNINGS
#include <string.h> //���ڿ� �Լ��� ����
#include <stdio.h>
int main(){
	char name[5][10]; //name�� �� ���ڿ� ����. �̸� ����
                   //�� �̸��� ���� 9��	
	char addr[5][30]; //addr�� �� ���ڿ� ����.
                   //�ּҴ� ���� 29��	
	char search[10];  //ã���� �ϴ� ����� �̸��� 9�� �̳���
	int i;
	//�̸��� �ּ� �Է�
	for (i = 0; i < 5; i++) //0~4���� �Է�
	{
		printf("�̸� %d:", i + 1); //i�� 0������ ����¹����� ù��°�� �ǹ̷� 1�� ����ϱ� ����
		scanf("%s", name[i]);//�̸� 5����� �ݺ��Ͽ� �Է¹���
		printf("�ּ� %d:", i + 1); 
		scanf("%s", addr[i]);
		
	}
	//�˻��� �̸� �Է� ����
	printf("�˻��� �̸�:");
	scanf("%s", search); //ã���� �ϴ� �̸��� search

	for (i = 0; i < 5; i++)
	{
		if (strcmp(name[i], search) == 0)
		{
			printf("�̸�:%s �ּ�:%s\n", name[i], addr[i]);
			return 0;
		}
	}
	printf("ã�� �̸��� �����ϴ�.");
	return 0;
}