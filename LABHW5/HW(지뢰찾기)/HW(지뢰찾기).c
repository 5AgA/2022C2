#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define X_VALUE 5 // 2���� �迭�� ���� ��
#define Y_VALUE 5 // 2���� �迭�� ���� ��

void readBombInfo(char grid[][Y_VALUE + 1])
{
	int i;
	// Grid �� ���� ���� �Է�
	printf("Input Grid\n");
	for (i = 0; i < X_VALUE; i++)
		scanf("%s", grid[i]); // ���ڿ� �������� ����!
}

void countBomb(char grid[][Y_VALUE + 1], int numOfBombs[][Y_VALUE])
{
	int i, j;

	for (i = 0; i < X_VALUE; i++)
		for(j = 0; j < Y_VALUE; j++)
			if (grid[i][j] == '*')
			{
				numOfBombs[i][j] = grid[i][j];
				if (i > 0)
				{
					numOfBombs[i - 1][j]++;
					if (j > 0)
						numOfBombs[i - 1][j - 1]++;
					if (j < Y_VALUE - 1)
						numOfBombs[i - 1][j + 1]++;
				}
				if (i < X_VALUE - 1)
				{
					numOfBombs[i + 1][j]++;
					if (j > 0)
						numOfBombs[i + 1][j - 1]++;
					if (j < Y_VALUE - 1)
						numOfBombs[i + 1][j + 1]++;
				}
				if (j > 0)
					numOfBombs[i][j - 1]++;
				if (j < Y_VALUE - 1)
					numOfBombs[i][j + 1]++;
			}
}

void display_numOfBombs(char grid[][Y_VALUE + 1], int numOfBombs[][Y_VALUE])
{
	int i, j;
	for (i = 0; i < X_VALUE; i++)
	{
		for (j = 0; j < Y_VALUE; j++)
		{
			if (grid[i][j] == '*')
				printf("*");
			else
				printf("%d", numOfBombs[i][j]);
		}
		printf("\n");
	}

}

int main(void)
{
	char grid[X_VALUE][Y_VALUE + 1]; // ���ڿ��� �������� NULL�� ���� �ϹǷ� 
	
	int numOfBombs[X_VALUE][Y_VALUE] = { 0 };

	readBombInfo(grid);
	countBomb(grid, numOfBombs);
	display_numOfBombs(grid, numOfBombs);
}