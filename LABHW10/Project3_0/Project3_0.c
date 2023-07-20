#define _CRT_SECURE_NO_WARNINGS
#define MAX_VIDEO 100
#define MAX_CHAR 100

#include <stdio.h>
#include <string.h>

struct VideoInfo {
	char title[MAX_CHAR];
	int qty;
};

int main(void)
{
	int videoCount = 5;
	struct VideoInfo videoList[MAX_VIDEO] = { {"BeforeSunrise", 1}, {"BeforeSunset", 3},
		{"BeforeMidnight", 5}, {"Casablanca", 7}, {"EdgeOfTomorrow", 9} };
	char title[MAX_CHAR];
	int qty;
	int i, idx = -1;
	int choice;

	printf("1(All Video 출력), 2(구입), 3(검색), 4(종료): ");
	scanf("%d", &choice);
	while (choice != 4) {
		switch (choice) {
		case 1:	// 보유 비디오들을 출력
			printf("Video제목\t수량\n");
			printf("-----------------------------\n");
			for (i = 0; i < videoCount; i++)
				printf("%-20s %-d\n", videoList[i].title, videoList[i].qty);
			break;
		case 2:	// 비디오 구입
			printf("Enter video 제목: ");
			scanf("%s", title);
			printf("Enter video 수량: ");
			scanf("%d", &qty);
			strcpy(videoList[videoCount].title, title);
			videoList[videoCount++].qty = qty;
			break;
		case 3:	// 제목으로 비디오 찾기
			printf("Enter video 제목: ");
			scanf("%s", title);
			for (i = 0; i < videoCount; i++)
			{
				if (strcmp(videoList[i].title, title) == 0)
				{
					idx = i;
					if (videoList[i].qty > 0)
					{
						printf("대여 가능합니다.\n");
						break;
					}
					else
					{
						printf("대여할 수 없습니다.\n");
						break;
					}
				}
			}
			if (idx == -1)
			{
				printf("그런 비디오는 없습니다.\n");
				break;
			}
		default:
			printf("다시 입력하세요");
			break;
		}
		printf("1(All Video 출력), 2(구입), 3(검색), 4(종료): ");
		scanf("%d", &choice);
	}
}