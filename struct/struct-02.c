#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct student {
    int number;
    char name[10]; //���ڹ迭
    double grade; 
};

int main(void)
{
    struct student s; //����ü ���� ����

    printf("�й��� �Է��ϼ���: ");
    scanf("%d", &s.number); //����ü ����� �ּ� ����

    printf("�̸��� �Է��ϼ���");
    scanf("%s", s.name); //���ڿ��� �� ��ü�� �ּҸ� �ǹ��ϱ� ������ & ��� x

    printf("������ �Է��ϼ���(�Ǽ�): ");
    scanf("%lf", &s.grade);

    scanf("�й�: %d\n", s.number); //����ü����, ��Һ���
    scanf("�̸�: %s\n", s.name); 
    scanf("�й�: %.2f\n", s.grade);

    return 0;
}