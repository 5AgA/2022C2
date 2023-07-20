#include <stdio.h>
int main(void)
{
	int arr[5] = { 1, 2, 3, 4, 5 };
	int *p = &arr[0];

	for (int i = 0; i < 5; i++)
	{
		printf("p = %p, ", p);
		printf("*p = %d\n", *p++);
	}

	printf("-------------------------------------------------\n");

	p = &arr[0];
	for (int i = 0; i < 5; i++)
	{
		printf("p = %p, ", p);
		printf("*p = %d\n", (*p)++);
	}

	printf("-------------------------------------------------\n");

	p = &arr[2];
	printf("p[0] = %d\n", p[0]);
	printf("p[1] = %d\n", p[1]);
	printf("p[2] = %d\n", p[2]);
	return 0;
}