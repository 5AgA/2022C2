#include <stdlib.h>
#include <time.h>
#include <stdio.h>
void initArray(int arr[], int size);
void printArray(int arr[], int size);
void printMinMax(int arr[], int size);
int main(void)
{
	int a[10];

	srand(100);
	initArray(a, 10);
	printArray(a, 10);
	printMinMax(a, 10);

	return 0;
}
void initArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		arr[i] = rand() % 100;
	return;
}

void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

void printMinMax(int arr[], int size)
{
	int i, min = 100, max = -1, m = 0, M = 0;
	for (i = 0; i < size; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
			m = i;
		}
		if (arr[i] > max)
		{
			max = arr[i];
			M = i;
		}
	}
	printf("최대값: 인덱스 = %d, 값 = %d\n", M, max);
	printf("최소값: 인덱스 = %d, 값 = %d\n", m, min);
}