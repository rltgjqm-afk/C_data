//#include <stdio.h>
//void swap(int x, int y); //�Լ�����
//int main()
//{
//	int a = 100, b = 200;
//	printf("a=%d b=%d\n", a, b);
//
//	swap(a, b); //�Լ� ȣ��(a,b ������)
//	//�Լ� �����ϰ� ���ƿ�, ��ȯ ������� ����.
//	printf("a=%d b=%d\n", a, b); //100,200
//	return 0;
//}
//void swap(int x, int y) //a->x(100) b->y(200)
//{
//	int tmp;
//	printf("x=%d y=%d\n", x, y); //100,200
//
//	tmp = x; //tmp�� 100
//	x = y; //y���� x�� �̵�,x�� 200
//	y = tmp; //tmp 100�� y�� �̵�.
//
//	printf("x=%d y=%d\n", x, y);
//	return; //����
//}
#include <stdio.h>
void swap(int *px, int *py)
int main(void)
{
	int a = 100, b = 200;
	printf("a=%d b=%d\n", a, b);

	swap(&a, &b);

	printf("a=%d b=%d\n", a, b);
	return 0;
}
void swap(int* px, int* py)
{
	int tmp;

	tmp = *px;
	*px = *py;
	
	*py = tmp;
}