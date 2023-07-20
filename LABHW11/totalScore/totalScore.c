#include <stdio.h>
typedef struct {
	int midterm, final;
}Score;

Score totalScore1(Score* p1, Score* p2)
{
	Score temp;
	temp.midterm = p1->midterm + p2->midterm;
	temp.final = p1->final + p2->final;
		return temp;
}
int main(void)
{
	Score s1, s2, tempScore;

	s1.midterm = 50; s1.final = 100;
	s2.midterm = 70; s2.final = 70;

	tempScore = totalScore1(&s1, &s2);
}