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
		printf("�Ҽ���.\n");
	else
		printf("�Ҽ� �ƴϴ�.\n");
	return 0;
}