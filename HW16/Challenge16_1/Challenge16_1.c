#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void printSeat(int arr[][10], int size);
void reserveSeat(int arr[][10], int r, int c);
int askReserve();

int askReserve()
{
	char choice;

	printf("좌석을 예약하시겠습니까?(y/n) ");
	scanf("%c", &choice, 1);
	if (choice == 'y')
		return 1;
	else
		return 0;
}

void reserveSeat(int arr[][10], int r, int c)
{
	
	if (arr[c-1][r-1] == 1)
		printf("이미 예약된 자리입니다.\n");
	else if (arr[c-1][r-1] == 0)
	{
		arr[c-1][r-1] = 1;
		printf("예약되었습니다.\n");
	}
}

void printSeat(int arr[][10], int size)
{
	int i, j;
	printf("-------------------------------------------------------\n");
	printf("            1   2   3   4   5   6   7   8   9  10   \n");
	printf("-------------------------------------------------------\n");
	for (i = 0; i < size; i++)
	{
		printf("%d           ", (i + 1));
		for (j = 0; j < 10; j++)
			printf("%d   ", arr[i][j]);
		printf("\n");
	}
}
int main(void)
{
	int seat[3][10] = { 0 };
	int row, col;
	char choice;

	while (askReserve() == 1)
	{
		printSeat(seat, 3);

		printf("몇번째 좌석을 예약하시겠습니까? (행 열)의 형태로 입력: ");
		scanf("%d %d", &col, &row);
		reserveSeat(seat, row, col);
		while (getchar() != '\n');
		printSeat(seat, 3);
	}
}