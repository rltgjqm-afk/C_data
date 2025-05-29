#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//순서가 중요함
int main()
{
	int i; //n번째 행
	char fruits[3][20]; //3개의 행과 20개의 열
	for (i=0;i<3;i++) //i는 0부터 2까지 1증가해 총 3번 반복한다.
	{
		printf("과일 이름을 입력하시오: "); 
		scanf("%s", &fruits[i]); //0부터 2까지 과일을 입력받는다.
	}
	for (i=0;i<3;i++) 
		printf("%d번째 과일:%s\n",i, fruits[i]); //입력받았던걸 출력
	return 0;
}
