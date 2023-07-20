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
	printf("Video����\t����\n");
	printf("-----------------------------\n");
	for (int i = 0; i < videoCount; i++)
		printf("%s\t%d\n", videoList[i].title, videoList[i].qty);
}

void purchaseVideo(VideoInfo videoList[], int* videoCountPtr, char* title, int qty)
{
	strcpy(videoList[*videoCountPtr].title, title);
	videoList[(* videoCountPtr)++].qty = qty;    // ����
}

int searchVideoByTitle(VideoInfo* videoList, int videoCount, char* title)
{
	int i, index = -1;
	for (i = 0; i < videoCount; i++)
	{
		if (strcmp(videoList++->title, title) == 0)   // ����
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
	printf("��id\tVideo����\n");
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

	printf("1(All Video ���), 2(����), 3(�˻�), 4(�뿩), 5(ALL �뿩���� ���), 6(����) : ");
	scanf("%d", &choice);
	while (choice != 6) {
		switch (choice) {
		case 1:	// ���� �������� ���
			printAllVideo(videoList, videoCount);
			break;
		case 2:	// ���� ����
			printf("Enter video ����: ");
			scanf("%s", title);
			printf("Enter video ����: ");
			scanf("%d", &qty);
			purchaseVideo(videoList, &videoCount, &title[0], qty);
			break;
		case 3:	// �������� ���� ã��
			printf("Enter video ����: ");
			scanf("%s", title);
			if ((indexSearched = searchVideoByTitle(&videoList[0], videoCount, &title[0])) == -1)
				printf("�׷� ������ �����ϴ�.\n");
			else if (videoList[indexSearched].qty == 0)
				printf("�� �뿩���Դϴ�.\n");
			else
				printf("�뿩 �����մϴ�.\n");
			break;
		case 4:
			printf("Enter video ����: ");
			scanf("%s", title);
			printf("Enter �� id: ");
			scanf("%d", &custId);
			rentVideo(videoList, videoCount, rentList, &rentCount, &title, custId);
			break;
		case 5:
			printAllRent(rentList, rentCount);
			break;
		default:
			printf("�ٽ� �Է��ϼ���");
			break;
		}
		printf("1(All Video ���), 2(����), 3(�˻�), 4(�뿩), 5(ALL �뿩���� ���), 6(����) : ");
		scanf("%d", &choice);
	}
}