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
	int i, j, tempt[4][4];

	for (i = 0; i < size; i++) 
		for (j = 0; j < 4; j++) 
			tempt[j][3 - i] = arr[i][j];

	for (i = 0; i < size; i++)
		for (j = 0; j < 4; j++)
			arr[i][j] = tempt[i][j];
	
}

int main(void)
{
	int num[4][4];

	putArray(num, 4);
	printArray(num, 4);
	for (int i = 0; i < 4; i++)
	{
		rotateArray(num, 4);
		printArray(num, 4);
	}

	return 0;
}