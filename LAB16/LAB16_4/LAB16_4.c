#include <stdio.h>
int main(void)
{
	int test[4][3] = { {8, 7}, {6, 5}, {1, 2}, {3, 4} };
	float total = 0, avg;
	int max = -1, sum = 0;
	
	printf("�迭 test�� ������Ʈ�� ����մϴ�.");
	for (int i = 0; i < 4; i++)
	{
		printf("\n%d��° row: ", i + 1);
		for (int j = 0; j < 3; j++)
			printf("%5d", test[i][j]);
		printf("\n");
	}

	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 3; j++)
			if (test[i][j] == 0)
				test[i][j] = -1;

	printf("\n��)\n�迭 test�� ������Ʈ�� ����մϴ�.\n");
	for (int i = 0; i < 4; i++)
	{
		printf("\n%d��° row: ", i + 1);
		for (int j = 0; j < 3; j++)
			printf("%5d", test[i][j]);
		printf("\n");
	}

	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 3; j++)
			total += test[i][j];
	avg = total / 12;

	printf("\n��)\nTotal is %d\nAverage is %.2f\n", (int)total, avg);

	printf("��)\n");
	for (int i = 0; i < 4; i++)
	{
		printf("%d��° row������ �ִ밪: ", i + 1);
		for (int j = 0; j < 3; j++)
			if (test[i][j] > max)
				max = test[i][j];
		sum += max;
		printf("%d\n", max);
		max = -1;
	}
	printf("�ִ밪�� ��: %d\n", sum);
	return 0;
}