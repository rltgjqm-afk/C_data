#include <stdio.h>
int main()
{
	int x = 500;
	double y = 20.34;
	int* p1 = NULL;
	double* p2 = NULL; //y가 더블형이라서 p2 도 더블형 10번째줄 참고

	p1 = &x;//p1이 x주소
	p2 = &y; //p2가 y주소
	printf(" %p %p\n", p2, &y);

	/*p2 = p1; //p1주소를 p2 대입
	printf(" %p %p\n", p1, p2);

	//x를 이용하여 주소와 값 출력
	printf("%p %d\n", &x, x);
	//p1를 이용하여 주소와 값 출력
	printf("%p %d", p1, *p1);
	*/
	return 0;
}