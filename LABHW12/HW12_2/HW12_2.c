#include <stdio.h>
#include <ctype.h>
int main(void)
{
	FILE* fp1, * fp2;

	char buf[30];

	fopen_s(&fp1, "input.txt", "r");
	if (fp1 == NULL)
	{
		printf("file open error!\n");
		return 1;
	}
	fopen_s(&fp2, "output.txt", "w");
	if (fp2 == NULL)
	{
		printf("file open error!\n");
		return 1;
	}

	//대문자
	fgets(buf, sizeof(buf), fp1);
	while (!feof(fp1))
	{
		for (int i = 0; buf[i] != '\0'; i++)
			buf[i] = toupper(buf[i]);
		fputs(buf, fp2);
		fgets(buf, sizeof(buf), fp1);
	}
	fseek(fp1, 0, SEEK_SET);
	fprintf(fp2, "\n");

	//소문자
	fgets(buf, sizeof(buf), fp1);
	while (!feof(fp1))
	{
		for (int i = 0; buf[i] != '\0'; i++)
			buf[i] = tolower(buf[i]);
		fputs(buf, fp2);
		fgets(buf, sizeof(buf), fp1);
	}

	fclose(fp1);
	fclose(fp2);
}