#include <stdio.h>
int main(void)
{
	FILE* fp = NULL;
	int ch;

	fopen_s(&fp, "a.txt", "w");
	if (fp == NULL)
	{
		printf("파일 열기 실패\n");
		return 1;
	}
	while ((ch = fgetc(stdin)) != EOF)
	{
		fputc(ch, fp);
	}
	fclose(fp);
}