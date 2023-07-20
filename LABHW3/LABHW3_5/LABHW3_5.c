#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#define SIZE 10
void selectionSort(int list[], int size);
int main(void)
{
	int array[SIZE];

	for (int i = 0; i < SIZE; i++)
		array[i] = rand() % 100;

	printf("발생된 난수:	  ");
	for (int i = 0; i < SIZE; i++)
		printf("%d ", array[i]);
	printf("\n");
	selectionSort(array, SIZE);

	return 0;
}
void selectionSort(int list[], int size)
{
	int i, j, tempt, minIndex;

	for (i = 0; i < size - 1; i++)
	{
		minIndex = i;
		for (j = i + 1; j < size; j++)
			if (list[j] < list[minIndex])
				minIndex = j;

		tempt = list[i];
		list[i] = list[minIndex];
		list[minIndex] = tempt;
	}
	printf("정렬 후:          ");
	for (i = 0; i < size; i++)
		printf("%d ", list[i]);
	printf("\n");
}