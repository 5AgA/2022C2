#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void initArray(int numbers[], int size) {
	//코드 작성
	int i, num;
	for (i = 0; i < size; i++)
	{
		scanf("%d", &num);
		num %= 10;
		numbers[num]++;
	}
}

void printArray(int arr[], int size) {
	//코드 작성
	int i;
	for (i = 0; i < size; i++)
		if (arr[i] > 0)
			printf("%d:%d\n", i, arr[i]);
}

int main() {
	int n, i;
	int numbers[10] = { 0 };
	scanf("%d", &n);   //입력하려는 숫자의 갯수
	initArray(numbers, n);
	printArray(numbers, 10);
}
