#include <stdio.h>
void ap2();
void ap1();
int main(void)
{
	ap1();//�Լ�ȣ��
	return 0;
}

void ap1()
{
	int i[5] = { 1,2,3,4,5 }; //0��° ����
	//5�� ������ ��, 4����Ʈ*5��=20����Ʈ
	printf("%d\n", i[0]);//1
	printf("%d\n", i[1]);//2
	printf("%d\n", i[2]);//3
	printf("%p\n", i); //�迭�� ��ü�� �ּҸ� �ǹ�
	printf("%p\n", &i[0]); //i[0]�ּ�
	printf("%p\n\n", &i); //i���ּ�
	//i == %i ==%i[0]
	
	printf("%p\n\n", &i[1]);//i 1���� �ּ� 
	printf("%p\n\n", i + 1);

	printf("%p\n\n", &i[2]);
	printf("%p\n\n", i + 2);

	printf("%p\n\n", &i[3]);
	printf("%p\n\n", i + 3);


	return;
}

void ap2()
{
	int a[4];
	//a-> a�� ù�ּ�
	//*a ->a�� ����Ű�� ���� �� a[0]�ּҰ� ���� �� ��0
	*a = 111;//a[0]=111
	*(a + 1) = 222;//a[1]=222
	*(a + 2) = 333; //a[2]=333
	*(a + 3) = 444;//a[3]=444
	printf("%d\n\n", *a);
	printf("%d\n\n", *(a+1)); //a[1]
	printf("%d\n\n", *(a+2));//a[2]
	printf("%d\n\n", *(a+3));//a[3]
}
//a==>100����
//a[0] =1 (������)=>4����Ʈ
//a[1] =2
//a[3]=3
//a[4]=4
//a[5]=5

//a==>100����
//a[0]=100����
//a[1]=104����

