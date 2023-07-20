#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct student {
	char name[20];
	int midterm;
	int final;
};

int main(void)
{
	struct student s[3] = {0};
	for (int i = 0; i < 3; i++)
	{
		printf("Enter student name: ");
		scanf("%s", s[i].name);
		printf("Enter midterm and final score: ");
		scanf("%d %d", &s[i].midterm, &s[i].final);
	}
	printf("\n이름    중간    학기말\n");
	for (int i = 0; i < 3; i++)
		printf("%s  %d      %d\n", s[i].name, s[i].midterm, s[i].final);
}