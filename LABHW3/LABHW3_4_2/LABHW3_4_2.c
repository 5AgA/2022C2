#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void printSet(int arr[], int j);
int searchKey(int arr[], int j, int key);
int main(void)
{
	int set[5];
	int element, i = 0;

	while (i != 5)
	{
		printf("���տ� �߰��� ����: ");
		scanf("%d", &element);
		if (searchKey(set, i, element))
			printf("%d�� �̹� ���տ� ����\n", element);
		else
		{
			set[i++] = element;
			printSet(set, i);
		}
	}
	return 0;
}
int searchKey(int arr[], int j, int key)
{
	for (int i = 0; i < j + 1; i++)
		if (arr[i] == key)
			return 1;
	return 0;
}
void printSet(int arr[], int j)
{
	printf("{ ");
	for (int i = 0; i < j; i++)
	{
		if (i == 0)
			printf("%d", arr[i]);
		else
			printf(", %d", arr[i]);
	}
	printf(" }\n");
}