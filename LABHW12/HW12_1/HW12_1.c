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
		printf("���� ���� �����Դϴ�!!!\n");
		return 1;
	}
	fopen_s(&fp2, "output.txt", "w");
	if (fp2 == NULL)
	{
		printf("���� ���� �����Դϴ�!!!\n");
		return 1;
	}

	for (int i = 0; i < 10; i++)
		fprintf(fp1, "%d\n", rand() % 100);
	fclose(fp1);
	fopen_s(&fp1, "random.txt", "r");

	fscanf_s(fp1, "%d", &num);
	while (!feof(fp1))
	{
		fprintf(fp3, "%5d", num);	// ��¿� ������
		fprintf(fp2, "%d\n", num);	// �Է¿� ������
		sum += num;
		fscanf_s(fp1, "%d", &num);
	}
	
	fprintf(fp3, "\n���� %d\n", sum);
	fprintf(fp2, "\n���� %d\n", sum);

	fclose(fp1);
	fclose(fp2);
	fclose(fp3);
}