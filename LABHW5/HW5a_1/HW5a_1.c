#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printMatrix(int a[][3], int size)
{
	int i, j;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < 3; j++)
			printf("%5d", a[i][j]);
		printf("\n");
	}
}

void readMatrix(int a[][3], int size)
{
	int i;
	for (i = 0; i < size; i++)
		scanf("%d %d %d", &a[i][0], &a[i][1], &a[i][2]);
}

void readMatrix2(int a[][2], int size)
{
	int i;
	for (i = 0; i < size; i++)
		scanf("%d %d", &a[i][0], &a[i][1]);
}

int main(void)
{
	int X[4][2], Y[2][3], Z[4][3];
	int i, j, k;
	printf("(4 x 2) 행렬 X 입력: \n");
	readMatrix2(X, 4);
	printf("(2 x 3) 행렬 Y 입력: \n");
	readMatrix(Y, 2);

	for (i = 0; i < 4; i++)
		for (j = 0; j < 3; j++)
		{
			Z[i][j] = 0;							// Z 배열 초기화
			for (k = 0; k < 2; k++)
				Z[i][j] += X[i][k] * Y[k][j];
		}

	printf("행렬곱:\n");
	printMatrix(Z, 4);
	printf("\n");
}