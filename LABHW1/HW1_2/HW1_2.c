#include <stdio.h>
int main(void)
{
	int coins[4] = { 500, 100, 50, 10 };
	int count[4];
	int change;

	printf("Enter the amount of change: ");
	scanf_s("%d", &change);

	for (int i = 0; i < 4; i++)
	{
		count[i] = change / coins[i];
		change %= coins[i];
	}
	for (int i = 0; i < 4; i++)
		printf("%d coin: %d\n", coins[i], count[i]);
}