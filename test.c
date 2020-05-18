#include<stdio.h>

char str1[20] = "hello world"; 
char str2[20];
int getValue(char a[])
{
	char tmp1[20] = "OStest fun1", tmp2[20] = "ret -1";
	a[0] = 't', a[1] = 'e', a[2] = 's', a[3] = 't', a[4] = '1';
	
	printf("%s\n", str1);
	printf("%s\n", a);
	printf("%s %s\n", tmp1, tmp2);
	return -1;
}

int nothing(void)
{
	char tmp1[20] = "OStest fun2", tmp2[20] = "ret 0";
	str2[0] = 't', str2[1] = 'e', str2[2] = 's', str2[3] = 't', str2[4] = '2';
	printf("%s\n", str2);
	printf("%s %s\n", tmp1, tmp2);
	return 0;
}

int main()
{
	char str3[20];
	int x = getValue(str3);
	int y = nothing();
	printf("return 1: %d, return 2: %d\n", x, y);
	return 0;
}
