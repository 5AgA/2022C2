#include <stdio.h>
int main(void)
{
	char text[][10] = { "ABC", "abcd", "Hello" };
	int i, j;

	printf("��) text�� �޸� ũ��� %d�̴�.\n", sizeof(text));
	for (i = 0; i < 3; i++)
	{
		printf("%d��° ��Ʈ��: %s, ", i + 1, text[i]);
		printf("�ƽ�Ű �ڵ尪: ");
		for (j = 0; j < i + 3; j++)
			printf("%d ", text[i][j]);
		printf("\n");
	}
	return 0;
}