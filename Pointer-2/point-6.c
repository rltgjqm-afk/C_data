#include <stidio.h>
int main(void)
{
	int i = 10;
	int* p;

	p = &i;
	printf("i = %d\n", i);

	*p = 20;
	printf("i = %d\n", i);
	//_________________________________________________________
	int a = 10;

	int* po;
	po = &a;
    //sizeof(): ()���� ũ��
	printf("%d\n", sizeof(a));//4����Ʈ
	printf("%d\n", sizeof(po)); //�����ͺ����� 8����Ʈ
	printf("%d\n", sizeof(&a));//�ּ� ����->8����Ʈ
	printf("%d\n", sizeof(*po));//����Ʈ������ *=> �� �ּҿ� ���� ���� ������, �������� 4����Ʈ
	
	return 0;
}