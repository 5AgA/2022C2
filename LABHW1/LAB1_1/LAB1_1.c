#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main(void)
{
	int num[5] ;
	int sum = 0, avg;
	
	for (int i = 0; i < 5; i++)
	{
		printf("Enter %dth number : ", i+1);
		scanf_s("%d", &num[i]);
		sum += num[i];
	}
	avg = sum / 5;

	printf("------------------------\n");
	printf("ÃÑÇÕÀº %d\nÆò±ÕÀº %d\n", sum, avg);
	printf("------------------------\n");

	for (int i = 0; i < 5; i++)
		printf("array[%d] : %d\n", i, num[i]);
	printf("\n");
	return 0;
}