//#include <stdio.h>
//void swap(int x, int y); //함수원형
//int main()
//{
//	int a = 100, b = 200;
//	printf("a=%d b=%d\n", a, b);
//
//	swap(a, b); //함수 호출(a,b 가지고)
//	//함수 수행하고 돌아옴, 반환 결과물은 없음.
//	printf("a=%d b=%d\n", a, b); //100,200
//	return 0;
//}
//void swap(int x, int y) //a->x(100) b->y(200)
//{
//	int tmp;
//	printf("x=%d y=%d\n", x, y); //100,200
//
//	tmp = x; //tmp는 100
//	x = y; //y값을 x로 이동,x는 200
//	y = tmp; //tmp 100이 y로 이동.
//
//	printf("x=%d y=%d\n", x, y);
//	return; //생략
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