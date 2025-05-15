#include <stdio.h>
void call_value(int icopy);
void call_refer(int* ip);
int main(void)
{
	int i = 777;
	call_value(i);//i의 값호출
	printf("값 호출 : %d\n", i); //777



	call_refer(&i);//i의 주소호출
	printf("참조 호출: %d\n", i);//888
	return 0;
}

void call_value(int icopy) //777 값은 같지만 방은따로 (영향x)<=>주소를 주게되면 (영향o)
{
	icopy = 888; //icopy 777->888
}

void call_refer(int* ip) //ip가 i주소 가르킴
{
	*ip = 888; // 주소가 가르키는 값
}

int main(void)
{
	int a = 300;
	int* p;
	printf("%d", a);
	p = &a; //a 100번지 =p 100번지
	//a, &a(일반변수의 주소)
	printf("%p", p); //100번지(메모리주소)
	printf("%d", *p); //역참조, 포인터변수* => 그 주소에 가서 그 값을 꺼내옴.
}

int a = 10;//정수형 일반변수 a 에 10을 저장한다
int* p = &a;// 정수형 포인터 변수 p 에 a의 주소를 저장한다
printf("%d", *p);//역참조, p주소에 가서 그 값을(a를) 꺼내온다.

return 0;
//--------------------------------------
int b = 5; //정수형 변수 b에 5를 저장한다
int* ptr = &b; //정수형 포인터 변수 ptr 에 b의 주소를 저장한다
*ptr = 20;// p 의 역참조(b)에 20의 값을 저장한다
printf("%d", b); //20이 출력된다.

return 0;
}