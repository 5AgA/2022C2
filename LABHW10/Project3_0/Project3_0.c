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

	printf("1(All Video ���), 2(����), 3(�˻�), 4(����): ");
	scanf("%d", &choice);
	while (choice != 4) {
		switch (choice) {
		case 1:	// ���� �������� ���
			printf("Video����\t����\n");
			printf("-----------------------------\n");
			for (i = 0; i < videoCount; i++)
				printf("%-20s %-d\n", videoList[i].title, videoList[i].qty);
			break;
		case 2:	// ���� ����
			printf("Enter video ����: ");
			scanf("%s", title);
			printf("Enter video ����: ");
			scanf("%d", &qty);
			strcpy(videoList[videoCount].title, title);
			videoList[videoCount++].qty = qty;
			break;
		case 3:	// �������� ���� ã��
			printf("Enter video ����: ");
			scanf("%s", title);
			for (i = 0; i < videoCount; i++)
			{
				if (strcmp(videoList[i].title, title) == 0)
				{
					idx = i;
					if (videoList[i].qty > 0)
					{
						printf("�뿩 �����մϴ�.\n");
						break;
					}
					else
					{
						printf("�뿩�� �� �����ϴ�.\n");
						break;
					}
				}
			}
			if (idx == -1)
			{
				printf("�׷� ������ �����ϴ�.\n");
				break;
			}
		default:
			printf("�ٽ� �Է��ϼ���");
			break;
		}
		printf("1(All Video ���), 2(����), 3(�˻�), 4(����): ");
		scanf("%d", &choice);
	}
}