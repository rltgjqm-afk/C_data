#include <stdio.h>

int main(void)
{
	char str1[6] = "Seoul";
	char str2[3] = { 'i','s','\0' };
	char str3[] = "the capital city of Korea. ";
	printf("%s %s %s\n", str1, str2, str3);

	char a[3] = { 'h','i' };
	char b[10] = { "hello" };
	char c[10] = "what's up";
	printf("%s\n", a);
	printf("%s\n", b);
	printf("%s\n", c);

	char i[2] = { 'h','i' };
	char k[9] = "What's up";
	printf("%s\n", i);
	printf("%s\n", k);

	
	return 0;
}