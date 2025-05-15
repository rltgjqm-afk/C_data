#include <stdio.h>
void ap2();
void ap1();
int main(void)
{
	ap1();//함수호출
	return 0;
}

void ap1()
{
	int i[5] = { 1,2,3,4,5 }; //0번째 시작
	//5개 정수형 방, 4바이트*5개=20바이트
	printf("%d\n", i[0]);//1
	printf("%d\n", i[1]);//2
	printf("%d\n", i[2]);//3
	printf("%p\n", i); //배열명 자체는 주소를 의미
	printf("%p\n", &i[0]); //i[0]주소
	printf("%p\n\n", &i); //i의주소
	//i == %i ==%i[0]
	
	printf("%p\n\n", &i[1]);//i 1번방 주소 
	printf("%p\n\n", i + 1);

	printf("%p\n\n", &i[2]);
	printf("%p\n\n", i + 2);

	printf("%p\n\n", &i[3]);
	printf("%p\n\n", i + 3);


	return;
}

void ap2()
{
	int a[4];
	//a-> a의 첫주소
	//*a ->a가 가르키는 곳의 값 a[0]주소가 가서 그 값0
	*a = 111;//a[0]=111
	*(a + 1) = 222;//a[1]=222
	*(a + 2) = 333; //a[2]=333
	*(a + 3) = 444;//a[3]=444
	printf("%d\n\n", *a);
	printf("%d\n\n", *(a+1)); //a[1]
	printf("%d\n\n", *(a+2));//a[2]
	printf("%d\n\n", *(a+3));//a[3]
}
//a==>100번지
//a[0] =1 (정수형)=>4바이트
//a[1] =2
//a[3]=3
//a[4]=4
//a[5]=5

//a==>100번지
//a[0]=100번지
//a[1]=104번지

