#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void initTable(int arr[][5], int col);
int totalTable(int arr[][5], int col);
void printTable(int arr[][5], int col);

void initTable(int arr[][5], int col)
{
	for (int i = 0; i < col; i++)
		for (int j = 0; j < 5; j++)
			arr[i][j] = rand() % 100;
	return 0;
}

int totalTable(int arr[][5], int col)
{
	int i, j, total = 0;

	for (int i = 0; i < col; i++)
		for (int j = 0; j < 5; j++)
			total += arr[i][j];
	return total;
}

void printTable(int arr[][5], int col)
{
	int i, j;

	for (i = 0; i < col; i++)
	{
		for (j = 0; j < 5; j++)
			printf("%4d", arr[i][j]);
		printf("\n");
	}

	printf("----각 열의 합----\n");
	for (i = 0; i < 5; i++)
		for (j = 0; j < col; j++)
			arr[3][i] += arr[j][i];
	for (j = 0; j < 5; j++)
		printf("%4d", arr[3][j]);
	printf("\n");
}
int main(void)
{
	int table[4][5] = {0};
	int i, j;
	int total = 0;

	srand(time(NULL));

	initTable(table, 3);
	printf("발생된 난수의 평균은 %d입니다\n", totalTable(table, 3) / 15);

	printTable(table, 3);

	return 0;
}