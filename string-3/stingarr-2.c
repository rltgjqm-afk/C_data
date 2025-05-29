#include <stdio.h>

void proc(int a[], int b);
int main(void)
{
	int a[6] = {3,2,5,1,4,6,};//정수형 숫자 배열
	//a배열은 정수형 4바이트*6개=24 바이트
	//a[0]=3,a[1]=2,a[2]=5,a[3]=1,a[4]=4,a[5]=6
    
	proc(a, 0); //함수 호출(a배열,0->넘김)
}
void proc(int a[], int b)//함수 정의
                    //a배열-> 정수형a[6], b는 0받음
{
	int i;
	if (b > 1)//처음 b가 0이므로 결과가 거짓
	{
		return; //참일떄 수행
	}
	else //b가 1보다 크지 않으므로(거짓)
		for (i = 0; i < 6; i++)//6번 반복
			printf("%d", a[i]);
	return 0;
}