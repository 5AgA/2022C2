#include <stdio.h>
int main(void)
{
	FILE* fp1, * fp2;

	int score;

	fopen_s(&fp1, "score.in", "r");
	if (fp1 == NULL)
	{
		printf("파일 오픈 에러입니다!!!\n");
		return 1;
	}

	fopen_s(&fp2, "score.out", "w");
	if (fp2 == NULL)
	{
		printf("file open error!\n");
		return 1;
	}

	fscanf_s(fp1, "%d", &score);
	while (!feof(fp1))
	{
		fprintf(fp2, "%d\n", score + 9);
		fscanf_s(fp1, "%d", &score);
	}

	fclose(fp1);
	fclose(fp2);
}