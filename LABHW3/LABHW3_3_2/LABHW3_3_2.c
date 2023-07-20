#define _CRT_SECURE_NO_WARNINGS
#define SIZE 10 
#include <stdio.h> 
int askReservation();
void printSeats(int s[], int size);
void processReservation(int s[], int size, int seatNumber);
int main(void)
{
	int seatChoice = 0;
	int seats[SIZE] = { 0 };
	printf("******좌석 예약 시스템******\n");
	printSeats(seats, SIZE);
	while (seats[9] != 1)
	{
		seatChoice += askReservation();
		processReservation(seats, SIZE, seatChoice);
		while (getchar() != '\n'); // 버퍼 비움
		printSeats(seats, SIZE);
	}
}
int askReservation()
{
	int seatChoice;
	printf("\n좌석을 예약하시겠습니까?(몇명) ");
	scanf("%d", &seatChoice);
	return seatChoice;
}
void processReservation(int s[], int size, int seatNumber)
{
	int i; 
	for (i = 0; i < seatNumber; i++)
		s[i] = 1;

}
void printSeats(int s[], int size)
{
	printf("----------------------\n");
	printf(" 1 2 3 4 5 6 7 8 9 10\n");
	printf("----------------------\n");
	for (int i = 0; i < size; i++)
		printf("%2d", s[i]);
	printf("\n");
}