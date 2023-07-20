#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	FILE* fp1, * fp2, *fp3 = stdout;

	int num;
	int sum = 0;
	
	srand(time(NULL));
	fopen_s(&fp1, "random.txt", "w");
	if (fp1 == NULL)
	{
		printf("파일 오픈 오류입니다!!!\n");
		return 1;
	}
	fopen_s(&fp2, "output.txt", "w");
	if (fp2 == NULL)
	{
		printf("파일 오픈 오류입니다!!!\n");
		return 1;
	}

	for (int i = 0; i < 10; i++)
		fprintf(fp1, "%d\n", rand() % 100);
	fclose(fp1);
	fopen_s(&fp1, "random.txt", "r");

	fscanf_s(fp1, "%d", &num);
	while (!feof(fp1))
	{
		fprintf(fp3, "%5d", num);	// 출력용 포인터
		fprintf(fp2, "%d\n", num);	// 입력용 포인터
		sum += num;
		fscanf_s(fp1, "%d", &num);
	}
	
	fprintf(fp3, "\n합은 %d\n", sum);
	fprintf(fp2, "\n합은 %d\n", sum);

	fclose(fp1);
	fclose(fp2);
	fclose(fp3);
}