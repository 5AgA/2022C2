#include <stdio.h>
int main(void)
{
	int max = -1, i = 0, score = 0, n = 0;

	printf("n : ");
	scanf_s("%d", &n);

	while (i < n)
	{
		printf("score : ");
		scanf_s("%d", &score);
		if (max < score)
			max = score;
		i++;
	}
	printf("%d", max);
	return 0;
}