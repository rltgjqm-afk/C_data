#define _CRT_SECURE_NO_WARNINGS
#include <string.h> //문자열 함수가 포함
#include <stdio.h>
int main(){
	char name[5][10]; //name에 들어갈 문자열 개수. 이름 갯수
                   //그 이름은 각각 9자	
	char addr[5][30]; //addr에 들어갈 문자열 개수.
                   //주소는 각각 29자	
	char search[10];  //찾고자 하는 사람의 이름을 9자 이내로
	int i;
	//이름과 주소 입력
	for (i = 0; i < 5; i++) //0~4개에 입력
	{
		printf("이름 %d:", i + 1); //i가 0이지만 실출력문에는 첫번째의 의미로 1을 출력하길 원함
		scanf("%s", name[i]);//이름 5명것을 반복하여 입력받음
		printf("주소 %d:", i + 1); 
		scanf("%s", addr[i]);
		
	}
	//검색할 이름 입력 받음
	printf("검색할 이름:");
	scanf("%s", search); //찾고자 하는 이름은 search

	for (i = 0; i < 5; i++)
	{
		if (strcmp(name[i], search) == 0)
		{
			printf("이름:%s 주소:%s\n", name[i], addr[i]);
			return 0;
		}
	}
	printf("찾는 이름이 없습니다.");
	return 0;
}