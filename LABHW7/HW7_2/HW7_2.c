#include <stdio.h>
#include <stdlib.h>

void generateData();
void printData();
int totalData();
static int data[3][10];

void main()
{
	srand(200);

	generateData();
	printData();
	printf("\n전체의 합은: %d\n", totalData());
}

void generateData()
{
	int* p = &data[0][0];
	int i;
	for (i = 0; i < 30; i++)
		*p++ = rand() % 100;
}

void printData()
{
	int* p = &data[0][0];
	int i;
	for (i = 0; i < 30; i++)
	{
		printf("%3d", *p++);
		if (i % 10 == 9)
			printf("\n");
	}
}

int totalData()
{
	int* p = &data[0][0];
	int i, total = 0;
	for (i = 0; i < 30; i++)
		total += *p++;
	return total;
}