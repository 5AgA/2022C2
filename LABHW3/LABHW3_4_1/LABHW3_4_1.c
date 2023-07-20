#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void printSet(int arr[], int j);
int main(void)
{
	int multiset[5];
	int element, i = 0;
	
	while (i != 5)
	{
		printf("다중집합에 추가할 원소: ");
		scanf("%d", &element);
		multiset[i++] = element;
		printSet(multiset, i);
	}
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