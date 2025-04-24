#include <stdio.h>
int fun1(); // 함수 원형(함수 선언)
//함수가 main 아래 위치, 해당 함수가 존재함을 미리 알림, 선언함.
//끝에 ; 붙임.
int fun2();

int main(void) { //void : 형이 없다
	printf("메인 시작\n");//1
	fun1();//2  
	printf("메인 끝\n");//10   
	return 0;//11
}
int fun1() { //매개변수도 없음, return 으로 반환할 값의 형을 기입한다(return 0 -> 정수형 -> int)
	printf("fun1함수 시작\n");//3
	fun2();//4//함수호출
	printf("fun1함수 끝\n");   //8
	return 0;//9//fun1() 호출 다음 수행 줄로 이동
}
int fun2() {
	printf("fun2함수 시작\n");//5
	printf("fun2함수 끝\n");//6
	return 0;//7 //fun2() 호출 다음 수행 줄로 이동
}