#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 25");
	
	again:
	printf("请注意你的电脑在25s内关机，请输入我是笨蛋不然关机");
	scanf("%s", input);
	if (strcmp(input, "我是笨蛋") == 0)
	{
		system("shutdown -a");
	}

	else 
	{
		goto again;
	}
	return 0;
}
