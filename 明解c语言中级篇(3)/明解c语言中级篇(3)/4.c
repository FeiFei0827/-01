//#define _CRT_SECURE_NO_WARNINGS 1
//#include <time.h>
//#include <stdio.h>
//#include <stdlib.h>
//
//int human;		/* ��ҵ����� */
//int comp;		/* ����������� */
//int win_no;		/* ʤ������ */
//int lose_no;	/* ʧ�ܴ��� */
//int draw_no;	/* ƽ�ִ��� */
//int round;      /* ����*/
//
//char *hd[] = { "ʯͷ", "����", "��" };		/* ���� */
//
///*--- ��ʼ���� ---*/
//void initialize(void)
//{
//	win_no = 0;		/* ʤ������ */
//	lose_no = 0;		/* ʧ�ܴ��� */
//	draw_no = 0;		/* ƽ�ִ��� */
//	round = 0;          /*����*/
//	srand(time(NULL));	/* �趨��������� */
//
//	printf("��ȭ��Ϸ��ʼ!!\n");
//}
//
///*--- ���в�ȭ��Ϸ����ȡ/�������ƣ�---*/
//void jyanken(void)
//{
//	int i;
//	if (round == 1)
//		comp = 0;
//	else
//	comp = rand() % 3;
//         /* ����������ɼ���������ƣ�0,2��*/
//	do {
//		printf("\n\aʯͷ������ ������");
//		for (i = 0; i < 3; i++)
//			printf(" (%d)%s", i, hd[i]);
//		printf(":");
//		scanf("%d", &human);		/* ��ȡ��ҵ����� */
//	} while (human < 0 || human > 2);
//}
//
///*--- ����ʤ��/ʧ��/ƽ�ִ��� ---*/
//
//void count_no_and_disp_result(int result)
//{
//	switch (result) {
//	case 0: puts("ƽ�֡�");	draw_no++; break;	 /* ƽ�� */
//	case 1: puts("�����ˡ�"); lose_no++;   break;	 /* ʧ�� */
//	case 2: puts("��Ӯ�ˡ�"); win_no++;   break;	 /* ʤ�� */
//	}
//}
///*--- ȷ���Ƿ��ٴ���ս ---*/
//int confirm_retry(void)
//{
//	int x;
//
//	printf("����һ���𡤡���(0)�� (1)�ǣ�");
//	scanf("%d", &x);
//
//	return x;
//}
//
//int main(void)
//{
//	int judge;				/* ʤ�� */
//	int retry;				/* ����һ�Σ�*/
//
//	initialize();						/* ��ʼ���� */
//
//	do {
//		round++;
//		jyanken();						/* ���в�ȭ��Ϸ */
//		/* ��ʾ���������ҵ����� */
//		printf("�ҳ�%s�����%s��\n", hd[comp], hd[human]);
//
//		judge = (human - comp + 3) % 3;	/* �ж�ʤ�� */
//		count_no_and_disp_result(judge);
//		retry = confirm_retry();		/* ȷ���Ƿ��ٴ���ս */
//	} while (retry == 1);
//
//	printf("%dʤ%d��%dƽ��\n", win_no, lose_no, draw_no);
//
//	return 0;
//}