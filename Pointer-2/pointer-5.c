#include <stdio.h>
int main(void)
{
	int a = 100;
	int b = 200;
	int* p = NULL;

	p = &a;
	printf("a �ּ�=( %p )\n", &a); //a�� �ּ�          a�� �ּ�
	printf("p �ּ�=( %p )\n", p); //p�� �ּ� ����ü��    p �ּ�
	printf("a ��=( %d )\n", a);                     //100
	printf("p ��=( %d )\n", *p); //p�� ����Ű�� �ּ��� ��           100
	
	p = &b;                          
	printf("p �ּ�=( %p )\n",p);                //p�� �ּ�
	printf("p ��=( %d )\n", *p); //b�� �������̴ϱ� %d        //200
	
	return 0;
}