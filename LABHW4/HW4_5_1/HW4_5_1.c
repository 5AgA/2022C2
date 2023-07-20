#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int get_cycle_number(int n);
int main(void)
{
	int n;

	printf("Enter a number:");
	scanf_s("%d", &n);
	
	printf("\n사이클의 길이: %d\n", get_cycle_number(n) + 1);
}

int get_cycle_number(int n)
{
	int cnt = 0;
	
	printf("%d ", n);
	while (n != 1)
	{
		if (n % 2 == 0)
		{
			n /= 2;
			printf("%d ", n);
		}
		else
		{
			n = n * 3 + 1;
			printf("%d ", n);
		}
		cnt++;
	}
	return cnt;
}