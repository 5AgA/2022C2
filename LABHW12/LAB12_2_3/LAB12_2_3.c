#include <stdio.h>
int main(void)
{
	FILE * fp1, * fp2;

	char buf[30];

	fopen_s(&fp1, "hello.txt", "r");
	if (fp1 == NULL)
	{
		printf("file open error!\n");
		return 1;
	}

	fopen_s(&fp2, "hello2.txt", "w");
	if (fp2 == NULL)
	{
		printf("파일 오픈 에러입니다!!!\n");
		return 1;
	}

	fgets(buf, sizeof(buf), fp1);
	while (!feof(fp1))
	{
		fputs(buf, fp2);
		fgets(buf, sizeof(buf), fp1);
	}
	fseek(fp1, 0, SEEK_SET);
	fgets(buf, sizeof(buf), fp1);
	while (!feof(fp1))
	{
		fputs(buf, fp2);
		fgets(buf, sizeof(buf), fp1);
	}

	fclose(fp1);
	fclose(fp2);
}