#include <stdio.h>
int main(void)
{
	int state;
	FILE* fp, *fp1 = stdout;
	
	char ch;

	fopen_s(&fp, "hello.in", "r");
	
	if (fp == NULL)
	{
		printf("파일 오픈 에러입니다!!!\n");
		return 1;
	}
	ch = getc(fp);
	while (!feof(fp))
	{
		putc(ch, fp1);
		ch = getc(fp);
	}

	state = fclose(fp);
	if (state != 0)
	{
		printf("file close error!\n");
		return 1;
	}

	return 0;
}