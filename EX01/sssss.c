#include <stdio.h>
int fun1(); // �Լ� ����(�Լ� ����)
//�Լ��� main �Ʒ� ��ġ, �ش� �Լ��� �������� �̸� �˸�, ������.
//���� ; ����.
int fun2();

int main(void) { //void : ���� ����
	printf("���� ����\n");//1
	fun1();//2  
	printf("���� ��\n");//10   
	return 0;//11
}
int fun1() { //�Ű������� ����, return ���� ��ȯ�� ���� ���� �����Ѵ�(return 0 -> ������ -> int)
	printf("fun1�Լ� ����\n");//3
	fun2();//4//�Լ�ȣ��
	printf("fun1�Լ� ��\n");   //8
	return 0;//9//fun1() ȣ�� ���� ���� �ٷ� �̵�
}
int fun2() {
	printf("fun2�Լ� ����\n");//5
	printf("fun2�Լ� ��\n");//6
	return 0;//7 //fun2() ȣ�� ���� ���� �ٷ� �̵�
}