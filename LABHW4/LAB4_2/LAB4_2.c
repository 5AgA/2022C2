#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int sum(int num);
void main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	printf("1부터 %d까지의 합은 %d입니다.\n", n, sum(n));

	return 0;
}

int sum(int num)
{
	if (num < 1)
		return 0;
	else
		return num + sum(num - 1);
}