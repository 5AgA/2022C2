#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int total = 0;
	int i = 0;
	int score = 0;
	int n = 0;
	printf("n : ");
	scanf_s("%d", &n);

	while (i < n)
	{
		printf("score : ");
		scanf_s("%d", &score);
		total += score;

		i++;
	}
	printf("%d", total);
	return 0;
}