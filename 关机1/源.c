#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 25");
	
	again:
	printf("��ע����ĵ�����25s�ڹػ������������Ǳ�����Ȼ�ػ�");
	scanf("%s", input);
	if (strcmp(input, "���Ǳ���") == 0)
	{
		system("shutdown -a");
	}

	else 
	{
		goto again;
	}
	return 0;
}
