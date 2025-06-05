//while -01.c
//switch, while 이용
//잔액은 10,000 원 있는 상태이고
//입력: 금액
//구분 입력: a이면 입금(잔액+금액)
//구분 입력: b이면 출금(잔액-금액) (잔액이 금액 보다 큰 경우 논외)
//잘못 입력하면 구분 입력오류 출력
//잔액을 출력
//무한반복-> 종료할까요? y이면 끝. n이면 반복.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int sum = 10000; //잔액 초기화 값을 10000 대입
	int money; //입금 출금 금액 입력받을 변수
	char gubun; //구분 a/b 입력받음.
	char end; //종료할까요? y/n

	printf("금액을 입력하세요");
	scanf("%d", &money); //금액 입력

	printf("구분을 입력하세요(a:입금, b:출금)");
	scanf(" %c", &gubun); //공백 추가

	switch (gubun) //조건을 가지고 있는 변수
	{
	case 'a': //물어볼 조건
		sum = sum + money;
		printf("현재잔액은 %d\n", sum);
		break;
	case 'b':
		sum = sum - money;
		printf("현재잔액은 %d\n", sum);
		break;
	default:
		printf("구분 입력 오류\n");
		break;
	}


	return 0;
}