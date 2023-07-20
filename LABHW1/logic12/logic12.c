#include <stdio.h>
#define SIZE 12
int searchKeyInArray(int a[], int size, int searchKey);
int searchKeyInArray(int a[], int size, int searchKey)
{
	for (int i = 0; i < size; i++)
	{
		if (a[i] == searchKey)
			return i+1;
	}
	return -1;
}
int main(void)
{
	int array[SIZE] = { 11, 22, 33, 44, 55, 66, 11, 22, 33, 44, 55, 66 };
	int searchKey;

	printf("Enter the search key : ");
	scanf_s("%d", &searchKey);

	if (searchKeyInArray(array, SIZE, searchKey) == -1)
		printf("None\n");
	else
		printf("location : %d\n", searchKeyInArray(array, SIZE, searchKey));

	return 0;
}