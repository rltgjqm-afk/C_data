#include <stdio.h>

int main(void)
{
	char str[30] = "C language";
	int i = 0;

	while(str[i] != '\0') //�����Ҷ� �ݺ�
		i++;
	
	printf("���ڿ�\"%s\"�� ���̴� %d�Դϴ�.\n", str, i);
	return 0;
	// \n
	// \t
	// \" "���
	// \' '���
}