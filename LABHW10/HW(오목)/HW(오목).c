#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define BOARD_SIZE 10 // 추후에 10으로 바꾸어서 진행한다
int winCheck(char b[][BOARD_SIZE], int r, int c)
{
	int cnt = 0;
	int num = 0;
	int j;
	char turn = b[r][c];

	// 가로 오목
	for (int i = 0; i < BOARD_SIZE; i++)
	{
		if (b[r][i] == turn)
		{
			cnt++;
			if (i == BOARD_SIZE - 1 && cnt == 5)
				return 1;
		}
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
	num = 0;
	cnt = 0;


	// 세로 오목
	for (int i = 0; i < BOARD_SIZE; i++)
	{
		if (b[i][c] == turn)
		{
			cnt++;
			if (i == BOARD_SIZE - 1 && cnt == 5)
				return 1;
		}
		else
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
	num = 0;
	cnt = 0;

	// 대각선 오목
	// 대각선
	if (r > c)
	{
		j = 0;
		for (int i = r - c; i < BOARD_SIZE; i++)
		{
			if (b[i][j++] == turn)
				cnt++;
			else
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
		if (cnt == 5)
			return 1;
		else
		{
			cnt = 0;
			num = 0;
		}
	}
	else
	{
		j = c - r;
		for (int i = 0; j < BOARD_SIZE; i++)
		{
			if (b[i][j++] == turn)
				cnt++;
			else
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
		if (cnt == 5)
			return 1;
		else
		{
			cnt = 0;
			num = 0;
		}
	}
		
	// 역대각선
	if (r + c > BOARD_SIZE)
	{
		j = BOARD_SIZE;
		for (int i = r + c - BOARD_SIZE; i < BOARD_SIZE; i++)
		{
			if (b[i][j--] == turn)
				cnt++;
			else
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
		if (cnt == 5)
			return 1;
		else
		{
			cnt = 0;
			num = 0;
		}
	}
	else
	{
		j = r + c;
		for (int i = 0; j >= 0; i++)
		{
			if (b[i][j--] == turn)
				cnt++;
			else
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
	}
	if (cnt == 5)
		return 1;
	else
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
	if (count == (BOARD_SIZE * BOARD_SIZE) + 1 && winCheck(board, r, c) != 1)
		printf("Nobody wins!\n");
	else if (count == (BOARD_SIZE * BOARD_SIZE) + 1 && winCheck(board, r, c) == 1)
		printf("Player %c wins!\n", turn);
}