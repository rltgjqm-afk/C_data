#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct student {
	int number;
	char name[20];
	double grade;
};

int main(void)
{
	struct student list[100];
	int i;
	for (i = 0; i < 3; i++)//0���� 1���� 3���� ������ �ݺ�
	{

		/*list[2].number = 24;
		strcpy(list[2].name, "ȫ�浿");
		list[2].grade = 4.3;*/
		printf("�й��� �Է��Ͻÿ�:");
		scanf("%d", &list[2].number);
		printf("�̸��� �Է��Ͻÿ�:");
		scanf("%s", &list[2].name);
		printf("������ �Է��Ͻÿ�:");
		scanf("%f", &list[2].grade);
	}
	for (i =0;i<3;i++)
	{
		printf("�й�:%d �̸�:%s ����:%.2f\n", list[i].number, list[i].name,
			list[i].grade);
	}
	return 0;
}



	printf("%d\n", &list[2].number);
	printf("%s\t", &list[2].name);
	printf("%f", &list[2].grade);

	return 0;
}
