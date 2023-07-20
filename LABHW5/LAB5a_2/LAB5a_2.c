#include <stdio.h>
void printArray(int arr[][4], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < 4; j++)
			printf("%5d", arr[i][j]);
		printf("\n");
	}
	printf("\n");
}
void putArray(int arr[][4], int size)
{
	int num = 1;

	for (int i = 0; i < size; i++)
		for (int j = 0; j < 4; j++)
			arr[i][j] = num++;
}
void rotateArray(int arr[][4], int size)
{
	int num = 1;

	for (int i = 3; i >= 0; i--)
	{
		for (int j = 0; j < size; j++)
			arr[j][i] = num++;
	}
}

int main(void)
{
	int num[4][4];

	putArray(num, 4);
	printArray(num, 4);
	rotateArray(num, 4);
	printArray(num, 4);

	return 0;
}