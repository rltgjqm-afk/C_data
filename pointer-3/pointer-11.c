#include <stdio.h>
void call_value(int icopy);
void call_refer(int* ip);
int main(void)
{
	int i = 777;
	call_value(i);//i�� ��ȣ��
	printf("�� ȣ�� : %d\n", i); //777



	call_refer(&i);//i�� �ּ�ȣ��
	printf("���� ȣ��: %d\n", i);//888
	return 0;
}

void call_value(int icopy) //777 ���� ������ �������� (����x)<=>�ּҸ� �ְԵǸ� (����o)
{
	icopy = 888; //icopy 777->888
}

void call_refer(int* ip) //ip�� i�ּ� ����Ŵ
{
	*ip = 888; // �ּҰ� ����Ű�� ��
}

int main(void)
{
	int a = 300;
	int* p;
	printf("%d", a);
	p = &a; //a 100���� =p 100����
	//a, &a(�Ϲݺ����� �ּ�)
	printf("%p", p); //100����(�޸��ּ�)
	printf("%d", *p); //������, �����ͺ���* => �� �ּҿ� ���� �� ���� ������.
}

int a = 10;//������ �Ϲݺ��� a �� 10�� �����Ѵ�
int* p = &a;// ������ ������ ���� p �� a�� �ּҸ� �����Ѵ�
printf("%d", *p);//������, p�ּҿ� ���� �� ����(a��) �����´�.

return 0;
//--------------------------------------
int b = 5; //������ ���� b�� 5�� �����Ѵ�
int* ptr = &b; //������ ������ ���� ptr �� b�� �ּҸ� �����Ѵ�
*ptr = 20;// p �� ������(b)�� 20�� ���� �����Ѵ�
printf("%d", b); //20�� ��µȴ�.

return 0;
}