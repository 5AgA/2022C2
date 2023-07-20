#define _CRT_SECURE_NO_WARNINGS
#define MAX_VIDEO 100
#define MAX_CUST 200
#define MAX_CHAR 100

#include <stdio.h>
#include <string.h>

typedef struct {
	char title[MAX_CHAR];
	int qty;
} VideoInfo;

typedef struct {
	int custId;
	char title[MAX_CHAR];
} RentInfo;

void printAllVideo(VideoInfo videoList[], int videoCount)
{
	printf("Video제목\t수량\n");
	printf("-----------------------------\n");
	for (int i = 0; i < videoCount; i++)
		printf("%s\t%d\n", videoList[i].title, videoList[i].qty);
}

void purchaseVideo(VideoInfo videoList[], int* videoCountPtr, char* title, int qty)
{
	strcpy(videoList[*videoCountPtr].title, title);
	videoList[(* videoCountPtr)++].qty = qty;    // 복습
}

int searchVideoByTitle(VideoInfo* videoList, int videoCount, char* title)
{
	int i, index = -1;
	for (i = 0; i < videoCount; i++)
	{
		if (strcmp(videoList++->title, title) == 0)   // 복습
		{
			index = i;
			return index;
		}
	}
	return index;
}

void rentVideo(VideoInfo videoList[], int videoCount, RentInfo rentList[], int* rentCountPtr, char* title, int custId)
{
	strcpy(rentList[*rentCountPtr].title, title);
	rentList[(* rentCountPtr)++].custId = custId;
	videoList[searchVideoByTitle(videoList, videoCount, title)].qty--;
}

void printAllRent(RentInfo rentList[], int rentCount)
{
	printf("고객id\tVideo제목\n");
	printf("-----------------------------\n");
	for (int i = 0; i < rentCount; i++)
		printf("%d\t%s\n", rentList[i].custId, rentList[i].title);
}

int main(void)
{
	int videoCount = 5;
	VideoInfo videoList[MAX_VIDEO] = { {"BeforeSunrise", 1}, {"BeforeSunset", 3},
		{"BeforeMidnight", 5}, {"Casablanca", 7}, {"EdgeOfTomorrow", 9} };
	int rentCount = 0;
	RentInfo rentList[MAX_CUST];

	int choice;
	int indexSearched;
	char title[MAX_CHAR];
	int custId, qty;

	printf("1(All Video 출력), 2(구입), 3(검색), 4(대여), 5(ALL 대여정보 출력), 6(종료) : ");
	scanf("%d", &choice);
	while (choice != 6) {
		switch (choice) {
		case 1:	// 보유 비디오들을 출력
			printAllVideo(videoList, videoCount);
			break;
		case 2:	// 비디오 구입
			printf("Enter video 제목: ");
			scanf("%s", title);
			printf("Enter video 수량: ");
			scanf("%d", &qty);
			purchaseVideo(videoList, &videoCount, &title[0], qty);
			break;
		case 3:	// 제목으로 비디오 찾기
			printf("Enter video 제목: ");
			scanf("%s", title);
			if ((indexSearched = searchVideoByTitle(&videoList[0], videoCount, &title[0])) == -1)
				printf("그런 비디오는 없습니다.\n");
			else if (videoList[indexSearched].qty == 0)
				printf("다 대여중입니다.\n");
			else
				printf("대여 가능합니다.\n");
			break;
		case 4:
			printf("Enter video 제목: ");
			scanf("%s", title);
			printf("Enter 고객 id: ");
			scanf("%d", &custId);
			rentVideo(videoList, videoCount, rentList, &rentCount, &title, custId);
			break;
		case 5:
			printAllRent(rentList, rentCount);
			break;
		default:
			printf("다시 입력하세요");
			break;
		}
		printf("1(All Video 출력), 2(구입), 3(검색), 4(대여), 5(ALL 대여정보 출력), 6(종료) : ");
		scanf("%d", &choice);
	}
}