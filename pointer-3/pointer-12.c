#include <stdio.h>
int main(void)
{
	int a[5] = { 10,20,30,40,50 };
//a[0] .. .. �ּ�
//a[0].. .. ��
//1.�ּ�&���
//2. �ּ�a,a +1
//3.�� �Ϲݹ迭��� ��a[0]
//4. �� a�����ּҺ���, *�̿�
printf("%p %p %p\n\n", &a[0], &a[1], &a[2]);
printf("%p %p %p\n\n", a, a+1, a+2);
printf("%d %d %d\n\n", a[0], a[1], a[2]);
printf("%d %d %d\n\n", *a, *(a + 1), *(a + 2));


return 0;
}