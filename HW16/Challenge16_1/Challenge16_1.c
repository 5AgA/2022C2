#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void printSeat(int arr[][10], int size);
void reserveSeat(int arr[][10], int r, int c);
int askReserve();

int askReserve()
{
	char choice;

	printf("�¼��� �����Ͻðڽ��ϱ�?(y/n) ");
	scanf("%c", &choice, 1);
	if (choice == 'y')
		return 1;
	else
		return 0;
}

void reserveSeat(int arr[][10], int r, int c)
{
	
	if (arr[c-1][r-1] == 1)
		printf("�̹� ����� �ڸ��Դϴ�.\n");
	else if (arr[c-1][r-1] == 0)
	{
		arr[c-1][r-1] = 1;
		printf("����Ǿ����ϴ�.\n");
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

		printf("���° �¼��� �����Ͻðڽ��ϱ�? (�� ��)�� ���·� �Է�: ");
		scanf("%d %d", &col, &row);
		reserveSeat(seat, row, col);
		while (getchar() != '\n');
		printSeat(seat, 3);
	}
}