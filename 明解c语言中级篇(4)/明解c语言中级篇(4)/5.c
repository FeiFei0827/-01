//#define _CRT_SECURE_NO_WARNINGS 1
//#include <time.h>
//#include <ctype.h>
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//char color[8][2] = { { "��" }, { "��" }, { "��" }, { "��" }, { "��" }, { "��" }, { "��" }, { "��" } };
///*--- ����4����ͬ���ֵ���ϲ���������x ---*/
//void make4digits(int x[])
//{
//	int i, j, val;
//
//	for (i = 0; i < 4; i++) {
//		do {
//			val = rand() % 8;			/* 0~7������� */
//			for (j = 0; j < i; j++)		/* �Ƿ��ѻ�ô���ֵ */
//			if (val == x[j])
//				break;
//		} while (j < i);		/* ѭ��ֱ����ò��ظ�����ֵ */
//		x[i] = val;
//	}
//}
//
///*--- �����������ַ���s����Ч�� ---*/
//int check(const char s[])
//{
//	int i, j;
//	if (strlen(s) != 4)			/* �ַ������Ȳ�Ϊ4 */
//		return 1;
//
//	for (i = 0; i < 4; i++) {
//		if (!isdigit(s[i]))
//			return 2;			/* �����˳�����������ַ� */
//		for (j = 0; j < i; j++)
//		if (s[i] == s[j])
//			return 3;		/* ������ͬ���� */
//	}
//	return 0;					/* �ַ�����Ч */
//}
//
///*--- hit��blow���ж� ---*/
//void judge(const char s[], const int no[], int *hit, int *blow)
//{
//	int i, j;
//
//	*hit = *blow = 0;
//	for (i = 0; i < 4; i++) {
//		for (j = 0; j < 4; j++) {
//			if (s[i] == '0' + no[j])	/* ����һ�� */
//			if (i == j)
//				(*hit)++;			/* hit��λ��Ҳһ�£�*/
//			else
//				(*blow)++;			/* blow��λ�ò�һ�£�*/
//		}
//	}
//}
//
///*--- ��ʾ�жϽ�� ---*/
//void print_result(int snum, int spos)
//{
//	if (spos == 4)
//		printf("�ش���ȷ!!");
//	else if (snum == 0)
//		printf("    ��Щ������û�д���ɫ��\n");
//	else {
//		printf("    ��Щ���������%d������ɫ��\n", snum);
//
//		if (spos == 0)
//			printf("    ������ɫ��λ�ö���һ�¡�\n");
//		else
//			printf("    ������%d����ɫ��λ����һ�µġ�\n", spos);
//	}
//	putchar('\n');
//}
//int turn(char a[], char b[])
//{
//	int j, i;
//	if (a[16] != '\0')
//		return 1;
//	else
//	for (j = 0; j < 4; j++)
//	{
//
//		for (i = 0; i < 8; i++)
//		{
//			if
//				(a[0] == color[i][0] && a[1] == color[i][1])
//				break;
//
//		}
//		a+=4;
//		b[j] = i+'0';
//	}
//	b[4] = '\0';
//
//	return 0;
//}
//int main(void)
//{
//	int try_no = 0;		/* ������� */
//	int chk;			/* ��������ַ����ļ���� */
//	int hit;			/* λ�ú����ֶ���ȷ�����ָ��� */
//	int blow;			/* ������ȷ��λ�ò���ȷ�����ָ��� */
//	int no[4];			/* Ҫ�µ����ִ� */
//	char buff[10];
//	char gagaga[100];/* ���ڴ�Ŷ�ȡ�����ִ����ַ��� */
//	clock_t	start, end;				/* ��ʼʱ��/����ʱ�� */
//
//	srand(time(NULL));				/* �趨��������� */
//
//	puts("�� ������������ɡ�");
//	puts("�� ���4����ɫ��");
//	puts("�� ���в�������ͬ��ɫ��");
//	puts("�� �����ɫ��ɫ��������������ɫ��");
//	puts("�� ��������ո��ַ���\n");
//	puts("�� ��ɫ��ɫ��ɫ��ɫ��ɫ��ɫ��ɫ��ɫ��\n");
//
//	make4digits(no);					/* ����4�����ָ�����ͬ�����ִ� */
//
//	start = clock();					/* ��ʼ���� */
//
//	do {
//		do {
//			printf("�����룺");
//			scanf("%s", gagaga);			/* ��ȡΪ�ַ��� */
//			if (turn(gagaga, buff))
//			{
//				printf("����������������\n");
//				continue;
//			}
//			chk = check(buff);			/* ����ȡ�����ַ��� */
//
//			switch (chk) {
//			case 1: puts("\a��ȷ������4����ɫ��"); break;
//			case 2: puts("\a�벻Ҫ���������ɫ������ַ���"); break;
//			case 3: puts("\a�벻Ҫ������ͬ����ɫ��"); break;
//			}
//		} while (chk != 0);
//
//		try_no++;
//		judge(buff, no, &hit, &blow);	/* �ж� */
//		print_result(hit + blow, hit);	/* ��ʾ�жϽ�� */
//
//	} while (hit < 4);
//
//	end = clock();						/* ������� */
//
//	printf("����%d�Ρ�\n��ʱ%.1f�롣\n",
//		try_no, (double)(end - start) / CLOCKS_PER_SEC);
//
//	return 0;
//}
