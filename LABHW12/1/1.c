#include <stdio.h>
int main(void)
{
	FILE* fp = NULL;
	int ch;

	fopen_s(&fp, "a.txt", "w");
	if (fp == NULL)
	{
		printf("���� ���� ����\n");
		return 1;
	}
	while ((ch = fgetc(stdin)) != EOF)
	{
		fputc(ch, fp);
	}
	fclose(fp);
}