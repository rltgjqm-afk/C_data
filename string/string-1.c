#include <stdio.h>
int main(void)
{
	int i;
	char str[4]; //문자배열 4자리
	str[0] = 'a'; //값 하나씩 대입
	str[1] = 'b';  
	str[2] = 'c';
	str[3] = '\0'; //null 값 입력
	//char str[4]="abc"; " "<-알아서 null 값이 끝에 들어감
	//char str[4]={'a','b','c','\0'};

	i = 0;
	/*while (str[i] != '\0') //반복문(null값이 아닐때)
		//null 값 만나면 끝남
	{
		printf("%c", str[i]); //1글자->%c
	i++;//0-2방까지 계속 증가하면서 박복한다.
}*/
	for(i;str[i] != '\0'; i++)
    //i=0;i<3;i++
	{
		printf("%c", str[i]);
	}
	printf("\n%s", str);
return 0;
}