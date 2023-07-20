#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int sum(int n);
int main(void)
{
	int n;

	scanf("%d", &n);
	printf("\n%d", sum(n));
}
int sum(int n)
{
	int total = 0;
	if (n == 0)
		return 0;
	else
	{
		total += 10 * n + sum(n - 1) + 2;
		printf("%d ", 10 * n + 2);
	}
	return total;
}