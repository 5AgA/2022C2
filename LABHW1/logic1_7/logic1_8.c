#include <stdio.h>
int isPrime(int n);
int isPrime(int n)
{
	int i = 2;

	for (; i < n - 1; i++)
	{
		if (n % i == 0)
			return 0;
	}
	return 1;
}
int main(void)
{
	int num; 

	printf("Enter number : ");
	scanf_s("%d", &num);

	if (isPrime(num))
		printf("소수다.\n");
	else
		printf("소수 아니다.\n");
	return 0;
}