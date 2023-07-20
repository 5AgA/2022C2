#include <stdio.h>
int main(void)
{
	FILE* fp1;

	char ch;

	fopen_s(&fp1, "hello.txt", "a+");

	if (fp1 == NULL)
	{
		printf("file open error!\n");
		return 1;
	}

	fprintf(fp1, "Hi\n");
	fprintf(fp1, "Everybody\n");

	fclose(fp1);

}