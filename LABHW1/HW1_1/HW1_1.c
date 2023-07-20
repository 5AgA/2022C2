#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int num, temp = 0;
	int data[100];
	int count[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

	printf("Enter the number of random numbers:(<=100): ");
	scanf_s("%d", &num);

	srand(time(NULL));

	for (int i = 0; i < num; i++)
	{
		data[i] = rand() % 10;
		temp = data[i];
		count[temp] += 1;
	}
	for (int i = 0; i < 10; i++)
		printf("%d의 개수는 %d\n", i, count[i]);
	printf("-----------------------------------------------\n");
	printf("발생된 난수는\n");
	for (int i = 0; i < num; i++)
	{
		printf("%5d", data[i]);
		if (i % 5 == 4)
			printf("\n");
	}
}