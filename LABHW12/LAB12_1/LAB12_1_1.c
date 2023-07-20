#include <stdio.h>
int main(void)
{
	int state;
	FILE* fp;
	char ch;

	fopen_s(&fp, "hello.out", "w");
	if (fp == NULL)
	{
		printf("file open error!₩n");
		return 1;
	}
	fprintf(fp, "Hello\n");
	fprintf(fp, "World\n");

	state = fclose(fp);
	if (state != 0)
	{
		printf("file close error!\n");
		return 1;
	}
}