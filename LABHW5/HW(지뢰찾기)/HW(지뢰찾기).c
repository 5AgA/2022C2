#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define X_VALUE 5 // 2차원 배열의 행의 수
#define Y_VALUE 5 // 2차원 배열의 열의 수

void readBombInfo(char grid[][Y_VALUE + 1])
{
	int i;
	// Grid 및 지뢰 정보 입력
	printf("Input Grid\n");
	for (i = 0; i < X_VALUE; i++)
		scanf("%s", grid[i]); // 문자열 형식으로 읽음!
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
	char grid[X_VALUE][Y_VALUE + 1]; // 문자열은 마지막에 NULL이 들어가야 하므로 
	
	int numOfBombs[X_VALUE][Y_VALUE] = { 0 };

	readBombInfo(grid);
	countBomb(grid, numOfBombs);
	display_numOfBombs(grid, numOfBombs);
}