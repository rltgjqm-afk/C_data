#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct student {
    int number;
    char name[10]; //문자배열
    double grade; 
};

int main(void)
{
    struct student s; //구조체 변수 선언

    printf("학번을 입력하세요: ");
    scanf("%d", &s.number); //구조체 멤버의 주소 전달

    printf("이름을 입력하세요");
    scanf("%s", s.name); //문자열은 그 자체가 주소를 의미하기 때문에 & 사용 x

    printf("학점을 입력하세요(실수): ");
    scanf("%lf", &s.grade);

    scanf("학번: %d\n", s.number); //구조체변수, 요소변수
    scanf("이름: %s\n", s.name); 
    scanf("학번: %.2f\n", s.grade);

    return 0;
}