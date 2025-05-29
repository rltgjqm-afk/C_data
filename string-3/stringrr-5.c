

//int f()
//int main()
//{
//	printf("%d")
//}
//
//
//
//
//int main()
//{
//	printf("%d", f(4));
//}
//
//int f(int i)
//{
//	int a[5] = { 5,4,3,2,1 };
//	if (i <= 0)
//		return 0;
//	else
//		return a[i] % 3 + f(i - 1);//재귀함수(4일때) 1+(3일때)2+(2일때)0+(1일때)1
//}
////i가 4일때 a[4]%3=1+f(3)=> 3을 보내면서 함수 호출
////i가 3일때 a[3]%3=2+f(2)=> 2을 보내면서 함수 호출
////i가 2일때 a[2]%3=0+f(1)=> 1을 보내면서 함수 호출
////i가 1일때 a[1]%3=1+f(0)=>0을 보내면서 함수 호출
////i가 0이면

//bitop.c
#include <stdio.h>
int main()
{
	printf("논리 and=> %d\n", 1 && 0);
	printf("논리 or=> %d\n", 1 || 0);

	int num1 = 16, num2 = 80;
	printf("비트 and=> %d\n", num1 & num2);
	printf("비트 or=> %d\n", num1 | num2);
	printf("비트 xor=> %d\n", num1 ^ num2);
	//논리연산자 and(&&)는 둘다 만족 or(||)는 둘중하나만 만족
	//비트연산자 &(and)는 둘다 11은 1나머지는 0
	//비트연산자 |(or)는 둘중 하나 1이면 1
	//비트연산자 ^(xor)는 두 비트가 같으면0,다르면1
}