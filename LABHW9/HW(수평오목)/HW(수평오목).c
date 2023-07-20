#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define BOARD_SIZE 10 // 추후에 10으로 바꾸어서 진행한다
int winCheck(char b[][BOARD_SIZE], int r, int c)
{
	int cnt = 0;
	int num = 0;
	char turn;

	turn = b[r][c];
	for (int i = 0; i < BOARD_SIZE; i++)
	{
		if (b[r][i] == turn)
			cnt++;
		else if (b[r][i] != turn)
		{
			if (num < cnt)
			{
				num = cnt;
				if (num == 5)
					return 1;
			}
			cnt = 0;
		}
	}
	if (num == 5)
		return 1;
	else if(num != 5)
		return 0;
}
void display(char b[][BOARD_SIZE])
{
	//char ch;
	int i, j;
	printf("     ");
	for (i = 0; i < BOARD_SIZE; i++)
		printf("%2d", i);
	printf("\n     ---------------------\n");
	for (i = 0; i < BOARD_SIZE; i++) {
		printf("%3d |", i);
		for (j = 0; j < BOARD_SIZE; j++)
			printf(" %c", b[i][j]);
		printf("\n");
	}
}
void main()
{
	char board[BOARD_SIZE][BOARD_SIZE];
	char turn = 'X';
	int r, c;
	int i, j;
	int count;
	for (i = 0; i < BOARD_SIZE; i++)
		for (j = 0; j < BOARD_SIZE; j++)
			board[i][j] = ' ';
	count = 1;
	display(board);
	do
	{
		if (count % 2 == 0)
			turn = 'O';
		else
			turn = 'X';
		printf("Player %c(행 열):", turn);
		scanf("%d %d", &r, &c);
		while ((board[r][c]) == 'X' || (board[r][c]) == 'O')
		{
			printf("Player %c(행 열):", turn);
			scanf("%d %d", &r, &c);
		}
		board[r][c] = turn;
		display(board);
		if (winCheck(board, r, c) == 1)
		{
			printf("Player %c wins!\n", turn);
			break;
		}
		count++;
	} while (count <= BOARD_SIZE * BOARD_SIZE);
	if (count == (BOARD_SIZE * BOARD_SIZE) + 1 && winCheck(board, r, c) == 0)
		printf("Nobody wins!\n");
	else if (count == (BOARD_SIZE * BOARD_SIZE) + 1 && winCheck(board, r, c) == 1)
		printf("Player %c wins!\n", turn);
}