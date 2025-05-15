#include <stdio.h>
int main(void)
{
	int a = 100;
	int b = 200;
	int* p = NULL;

	p = &a;
	printf("a 주소=( %p )\n", &a); //a의 주소          a의 주소
	printf("p 주소=( %p )\n", p); //p는 주소 그자체임    p 주소
	printf("a 값=( %d )\n", a);                     //100
	printf("p 값=( %d )\n", *p); //p가 가르키는 주소의 값           100
	
	p = &b;                          
	printf("p 주소=( %p )\n",p);                //p의 주소
	printf("p 값=( %d )\n", *p); //b가 정수형이니까 %d        //200
	
	return 0;
}