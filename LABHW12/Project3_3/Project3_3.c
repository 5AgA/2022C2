#define MAX_VIDEO 100
#define MAX_CUST 200 // max customer
#define MAX_CHAR 100 // ���ڿ��� max ����
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
typedef struct { // ��� ����: ���� �����ϰ� �ִ� Video ���� ����
	char title[MAX_CHAR];
	int qty; // ����
} VideoInfo;
typedef struct { // ���� ����: �����ذ� (�� id�� video id)���� ����
	int custId; // �� id : 1, 2, 3
	char title[MAX_CHAR]; // Video ����
} RentInfo;
void printAllVideo(VideoInfo videoList[], int videoCount) {
	int i;
	printf("Video����\t����\n");
	printf("-----------------------\n");
	for (i = 0; i < videoCount; i++)
		printf("%s\t%d\n", videoList[i].title, videoList[i].qty);
}
void purchaseVideo(VideoInfo videoList[], int* videoCountPtr, char* title, int qty) 
{
	/*����*/
	strcpy(videoList[*videoCountPtr].title, title);
	videoList[(*videoCountPtr)++].qty = qty;
}
int searchVideoByTitle(VideoInfo* videoList, int videoCount, char* title)
{
	/*����*/
	int index = -1;
	for (int i = 0; i < videoCount; i++)
	{
		if (strcmp(videoList++->title, title) == 0)
		{
			index = i;
			return index;
		}
	}
	return index;
}
void rentVideo(VideoInfo videoList[], int videoCount, RentInfo rentList[], int* rentCountPtr, char* title, int custId)
{ 
	/*����*/
	int index = searchVideoByTitle(videoList, videoCount, title);
	if (index != -1 && videoList[index].qty > 0)
	{
		strcpy(rentList[*rentCountPtr].title, title);
		rentList[(*rentCountPtr)++].custId = custId;
		videoList[searchVideoByTitle(videoList, videoCount, title)].qty--;
	}
	else if (index == -1 || videoList[index].qty == 0)
		printf("�뿩�� �Ұ��� �մϴ�.\n");
} 

void printAllRent(RentInfo rentList[], int rentCount) 
{
    int i;
	printf("��id\tVideo����\n");
	printf("-----------------------\n");
	for (i = 0; i < rentCount; i++)
		printf("%d\t%s\n", rentList[i].custId, rentList[i].title);
}
void readVideo(VideoInfo videoList[], int* videoCountPtr)
{
	FILE* fp;
	VideoInfo video;
	char buf[MAX_CHAR];
	int qty, i = 0;

	fopen_s(&fp, "video.txt", "r");
	if ( fp == NULL) 
	{
		printf("�Է� ���� ���� ����\n"); 
		exit(1);
	}
	// ���� ������ �Է����Ͽ��� �б�


	fscanf(fp, "%s", &buf);
	while (!feof(fp))
	{
		strcpy(videoList[i].title, buf);
		fscanf(fp, "%d", &qty);
		videoList[i++].qty = qty;
		fscanf(fp, "%s", &buf);
	}
	*videoCountPtr = i;
	
	fclose(fp);
}
void writeVideo(VideoInfo videoList[], int videoCount)
{
	FILE* fp;
	int i;

	if ((fp = fopen("video.txt", "w")) == NULL) 
	{
		printf("��� ���� ���� ����\n"); 
		exit(1);
	}
	// ���� ������ ��� �������� ����
	
	for (i = 0; i < videoCount; i++)
	{
		fprintf(fp, "%s %d\n", videoList[i].title, videoList[i].qty);
	}
	fclose(fp);
}

void writeRent(RentInfo rentList[], int rentCount)
{
	FILE* fp;
	int i;

	fp = fopen("rent.txt", "w");
	if (fp == NULL) {
		printf("��� ���� ���� ����\n"); exit(1);
	}
	for (i = 0; i < rentCount; i++)
		fprintf(fp, "%d %s\n", rentList[i].custId, rentList[i].title);
	fclose(fp);
}
int main(void)
{
	int videoCount = 0; // videoCount�� 0���� �ʱ�ȭ
	VideoInfo videoList[MAX_VIDEO];
	int rentCount = 0; // ���� ���� �Ǽ��� 0��
	RentInfo rentList[MAX_CUST];
	char title[MAX_CHAR];
	int qty, custId;
	int choice;
	int indexSearched;
	readVideo(videoList, &videoCount);
	printf("1(All Video ���), 2(����), 3(�˻�), 4(�뿩), 5(All �뿩���� ���), 6(����): ");
	scanf("%d", &choice);
	while (choice != 6) {
		switch (choice) {
		case 1: printAllVideo(videoList, videoCount); 
			break;
		case 2:
			printf("Enter video ����: ");
			scanf("%s", title);
			printf("Enter video ����: ");
			scanf("%d", &qty);
			purchaseVideo(videoList, &videoCount, title, qty); 
			break;
		case 3:
			printf("Enter video ����: ");
			scanf("%s", title);
			if ((indexSearched = searchVideoByTitle(videoList, videoCount, title)) == -1)
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
			rentVideo(videoList, videoCount, rentList, &rentCount, title, custId); 
			break;
		case 5:
			printAllRent(rentList, rentCount); 
			break;
		}
		printf("1(All Video ���), 2(����), 3(�˻�), 4(�뿩), 5(All �뿩���� ���), 6(����): ");
		scanf("%d", &choice);
	}
	writeVideo(videoList, videoCount);
	writeRent(rentList, rentCount);
}