#include <stdio.h>
int main()
{
	int x = 500;
	double y = 20.34;
	int* p1 = NULL;
	double* p2 = NULL; //y�� �������̶� p2 �� ������ 10��°�� ����

	p1 = &x;//p1�� x�ּ�
	p2 = &y; //p2�� y�ּ�
	printf(" %p %p\n", p2, &y);

	/*p2 = p1; //p1�ּҸ� p2 ����
	printf(" %p %p\n", p1, p2);

	//x�� �̿��Ͽ� �ּҿ� �� ���
	printf("%p %d\n", &x, x);
	//p1�� �̿��Ͽ� �ּҿ� �� ���
	printf("%p %d", p1, *p1);
	*/
	return 0;
}