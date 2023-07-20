#include <stdio.h>
int main(void)
{
	FILE* fp1, * fp2 = stdout;

	char ch;

	fopen_s(&fp1, "hello.in", "w");
	if (fp1 == NULL)
	{
		printf("file open error!\n");
		return 1;
	}
	fprintf(fp1, "Hello\n");
	fprintf(fp1, "World\n");
	fclose(fp1);

	fopen_s(&fp1, "hello.in", "r");
	while ((ch = getc(fp1)) != EOF)
		putc(ch, fp2);
	fclose(fp1);
	fclose(fp2);
}