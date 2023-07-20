#include <stdio.h>
int main(void)
{
	int test[4][3] = { {8, 7}, {6, 5}, {1, 2}, {3, 4} };
	float total = 0, avg;
	int max = -1, sum = 0;
	
	printf("배열 test의 엘리먼트를 출력합니다.");
	for (int i = 0; i < 4; i++)
	{
		printf("\n%d번째 row: ", i + 1);
		for (int j = 0; j < 3; j++)
			printf("%5d", test[i][j]);
		printf("\n");
	}

	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 3; j++)
			if (test[i][j] == 0)
				test[i][j] = -1;

	printf("\n다)\n배열 test의 엘리먼트를 출력합니다.\n");
	for (int i = 0; i < 4; i++)
	{
		printf("\n%d번째 row: ", i + 1);
		for (int j = 0; j < 3; j++)
			printf("%5d", test[i][j]);
		printf("\n");
	}

	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 3; j++)
			total += test[i][j];
	avg = total / 12;

	printf("\n라)\nTotal is %d\nAverage is %.2f\n", (int)total, avg);

	printf("마)\n");
	for (int i = 0; i < 4; i++)
	{
		printf("%d번째 row에서의 최대값: ", i + 1);
		for (int j = 0; j < 3; j++)
			if (test[i][j] > max)
				max = test[i][j];
		sum += max;
		printf("%d\n", max);
		max = -1;
	}
	printf("최대값의 합: %d\n", sum);
	return 0;
}