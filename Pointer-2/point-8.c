#include <stdio.h>
int main(void)
{
	int i = 10;
	int* pi = &i;
	//i => 10, pi�� i�ּ�
	printf("i = %d, pi =%p"\n", i,pi);

	(*pi)++; //pi ���� ������ ����
	      //������������ ���� ���� 1����
	printf("i =%d, pi =%p\n", i, pi);//

	*pi++; //pi���� �������� pi �ּҸ� ����
	printf("i = %d, pi = %p\n", i, pi);//11
	return 0;
}