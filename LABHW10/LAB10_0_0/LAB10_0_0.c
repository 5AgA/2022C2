#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct student {
	char name[20];
	int midterm;
	int final;
} aStudent;

int main(void)
{
	struct student aStudent;
	printf("Enter student name: ");
	scanf("%s", aStudent.name);
	printf("Enter midterm and final score: ");
	scanf("%d %d", &aStudent.midterm, &aStudent.final);
	printf("\n이름    중간    학기말\n");
	printf("%s  %d     %d\n", aStudent.name, aStudent.midterm, aStudent.final);
}