#include <stdio.h>
int main(void)
{
	FILE* fp = NULL;
	int ch;

	fopen_s(&fp, "fgetc_test.c", "r");
	if (fp == NULL)
	{
		printf("���� ���� ����\n");
		return 1;
	}

	while ((ch = fgetc(fp)) != EOF)
		fputc(ch, stdout);
	fclose(fp);
}