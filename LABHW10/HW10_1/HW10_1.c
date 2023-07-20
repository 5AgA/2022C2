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

	int mid = 0;
	int fin = 0;

	for (int i = 0; i < 3; i++)
	{
		printf("Enter student name: ");
		scanf("%s", s[i].name);
		printf("Enter midterm and final score: ");
		scanf("%d %d", &s[i].midterm, &s[i].final);
		s[i].average = (s[i].midterm + s[i].final) / 2;
		if (s[i].average >= 80)
			s[i].grade = 'A';
		else if (s[i].average >= 50)
			s[i].grade = 'B';
		else
			s[i].grade = 'F';
		mid += s[i].midterm;
		fin += s[i].final;
	}

	mid /= 3;
	fin /= 3;

	printf("\n이름    중간    학기말    평균\n");
	for (int i = 0; i < 3; i++)
		printf("%-7s %-7d %-9d %-9d\n", s[i].name, s[i].midterm, s[i].final, s[i].average);
	printf("\n이름    학점\n");
	for (int i = 0; i < 3; i++)
		printf("%s  %c\n", s[i].name, s[i].grade);

	printf("\n중간고사의 평균 = %d", mid);;
	printf("\n학기말고사의 평균 = %d\n", fin);;
}