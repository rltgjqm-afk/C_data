#include <stidio.h>
int main(void)
{
	int i = 10;
	int* p;

	p = &i;
	printf("i = %d\n", i);

	*p = 20;
	printf("i = %d\n", i);
	//_________________________________________________________
	int a = 10;

	int* po;
	po = &a;
    //sizeof(): ()안의 크기
	printf("%d\n", sizeof(a));//4바이트
	printf("%d\n", sizeof(po)); //포인터변수는 8바이트
	printf("%d\n", sizeof(&a));//주소 담음->8바이트
	printf("%d\n", sizeof(*po));//포인트변수에 *=> 그 주소에 가서 값을 가져옴, 정수형은 4바이트
	
	return 0;
}