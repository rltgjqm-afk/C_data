#include <stdio.h>
int main(void)
{
	int a[5] = { 10,20,30,40,50 };
//a[0] .. .. 주소
//a[0].. .. 값
//1.주소&사용
//2. 주소a,a +1
//3.값 일반배열요소 값a[0]
//4. 값 a시작주소부터, *이용
printf("%p %p %p\n\n", &a[0], &a[1], &a[2]);
printf("%p %p %p\n\n", a, a+1, a+2);
printf("%d %d %d\n\n", a[0], a[1], a[2]);
printf("%d %d %d\n\n", *a, *(a + 1), *(a + 2));


return 0;
}