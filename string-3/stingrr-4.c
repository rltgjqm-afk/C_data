#include <stdio.h>

int main()
{
	int a[10] = {3,2,5,1,4,6,8,2,6,10};//a[0]~a[9]
	int i;
	for (i = 0; i < 10; i++)
	{
		if (i % 3 == 2)//3���� ���������� �������� 2, �� 2,5,8��°
			printf("%d", a[i]);//a[2],a[5],a[8]
	}
	return 0;
}