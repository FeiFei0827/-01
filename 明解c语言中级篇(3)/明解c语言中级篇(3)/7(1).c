#define _CRT_SECURE_NO_WARNINGS 1
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h> 
#define NUM 2		/* ��ҵ����� */
int human_comp[NUM+1] = {0};		/* ����������� */
int won_[3] = {0};
char *hd[] = { "ʯͷ", "����", "��" };		/* ���� */

/*--- ��ʼ���� ---*/
void initialize(void)
{
	int i;
	for (i = 0; i < NUM; i++)
		human_comp[i] = 0;
	for (i = 0; i < NUM; i++)
	{
		won_[i]= 0;
	
	}
	srand(time(NULL));	/* �趨��������� */

	printf("��ȭ��Ϸ��ʼ!!\n");
}

/*--- ���в�ȭ��Ϸ����ȡ/�������ƣ�---*/
void jyanken()
{
	int i;
	for (i = 0; i < NUM; i++)
	{
		human_comp[i] = rand() % 3;
		Sleep(10);
	}
	/* ����������ɼ���������ƣ�0~2��*/

	do {
		printf("\n\aʯͷ������ ������");
		for (i = 0; i < 3; i++)
			printf(" (%d)%s", i, hd[i]);
		printf(":");
		scanf("%d", &human_comp[NUM]);		/* ��ȡ��ҵ����� */
	} while (human_comp[NUM] < 0 || human_comp[NUM] > 2);
}

/*--- ����ʤ��/ʧ��/ƽ�ִ��� ---*/
void judge()
{
	int i,j;
	int sign = 0;
	for (j = 0; j < NUM + 1; j++)
	{
		for (i = 0; i < NUM + 1; i++)
		{
			if (human_comp[i] == j)
			{
				sign++;
				break;
			}
		}
	}
	if (sign == 3 || sign == 1)
	{
		won_[2]++;
		printf("ƽ�֡�");
	}
	else
	{
		if ((human_comp[NUM] - human_comp[0] + 3) % 3 == 2)
		{
			won_[0]++;
			printf("��Ӯ�ˡ�");
		}
		else
		{
			won_[1]++;
			printf("�����ˡ�");
		}
	}

	printf("\n");
}

/*--- ȷ���Ƿ��ٴ���ս ---*/
int confirm_retry(void)
{
	int x;

	printf("����һ���𡤡���(0)�� (1)�ǣ�");
	scanf("%d", &x);

	return x;
}

int main(void)
{
	int i;			/* ʤ�� */
	int retry;				/* ����һ�Σ�*/

	initialize();						/* ��ʼ���� */

	do {
		jyanken();						/* ���в�ȭ��Ϸ */

		/* ��ʾ���������ҵ����� */
		for (i = 0; i < NUM; i++)
			printf("����%d��%s  ", i + 1, hd[human_comp[i]]);
		printf("���%s��\n", hd[human_comp[NUM]]);

		judge();/* �ж�ʤ�� */
		retry = confirm_retry();		/* ȷ���Ƿ��ٴ���ս */

	} while (retry == 1);

	printf("%dʤ%d��%dƽ��\n", won_[0], won_[1], won_[2]);

	return 0;
}

