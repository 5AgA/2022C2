struct student {
	char name[20];
	int midterm;
	int final;
	int average;
	char grade;
};
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	struct student s[3];
	struct student* sp = s;

	int mid = 0;
	int fin = 0;

	for (int i = 0; i < 3; i++)
	{
		printf("Enter student name: ");
		scanf("%s", &sp -> name);
		printf("Enter midterm and final score: ");
		scanf("%d %d", &sp -> midterm, &sp -> final);
		sp -> average = (sp -> midterm + sp -> final) / 2;
		if (sp -> average >= 80)
			sp -> grade = 'A';
		else if (sp -> average >= 50)
			sp -> grade = 'B';
		else
			sp -> grade = 'F';
		mid += sp -> midterm;
		fin += sp -> final;
		sp++;
	}

	mid /= 3;
	fin /= 3;
	sp = &s[0];

	printf("\n이름    중간    학기말    평균\n");
	for (int i = 0; i < 3; i++)
	{
		printf("%-7s %-7d %-9d %-9d\n", sp -> name, sp -> midterm, sp -> final, sp -> average);
		sp++;
	}
	sp = &s[0];

	printf("\n이름    학점\n");
	for (int i = 0; i < 3; i++)
	{
		printf("%s  %c\n", sp -> name, sp -> grade);
		sp++;
	}

	printf("\n중간고사의 평균 = %d", mid);;
	printf("\n학기말고사의 평균 = %d\n", fin);;
}