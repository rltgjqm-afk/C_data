#include <stdio.h>
int main(void)
{
	int i;
	char str[4]; //���ڹ迭 4�ڸ�
	str[0] = 'a'; //�� �ϳ��� ����
	str[1] = 'b';  
	str[2] = 'c';
	str[3] = '\0'; //null �� �Է�
	//char str[4]="abc"; " "<-�˾Ƽ� null ���� ���� ��
	//char str[4]={'a','b','c','\0'};

	i = 0;
	/*while (str[i] != '\0') //�ݺ���(null���� �ƴҶ�)
		//null �� ������ ����
	{
		printf("%c", str[i]); //1����->%c
	i++;//0-2����� ��� �����ϸ鼭 �ں��Ѵ�.
}*/
	for(i;str[i] != '\0'; i++)
    //i=0;i<3;i++
	{
		printf("%c", str[i]);
	}
	printf("\n%s", str);
return 0;
}