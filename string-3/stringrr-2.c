#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//������ �߿���
int main()
{
	int i; //n��° ��
	char fruits[3][20]; //3���� ��� 20���� ��
	for (i=0;i<3;i++) //i�� 0���� 2���� 1������ �� 3�� �ݺ��Ѵ�.
	{
		printf("���� �̸��� �Է��Ͻÿ�: "); 
		scanf("%s", &fruits[i]); //0���� 2���� ������ �Է¹޴´�.
	}
	for (i=0;i<3;i++) 
		printf("%d��° ����:%s\n",i, fruits[i]); //�Է¹޾Ҵ��� ���
	return 0;
}
