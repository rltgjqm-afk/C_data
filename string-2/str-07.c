#include <stdio.h>

int main(void)
{
	int i;
	char menu[5][10] = //5행 10열
	{
		"init",
		"open",
		"close",
		"read",
		"write"
	};

	for (i = 0; i < 5; i++)
		printf("%d 번째 메뉴: %s \n", i, menu[i]);

	return 0;
}