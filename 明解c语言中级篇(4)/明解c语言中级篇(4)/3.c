//#define _CRT_SECURE_NO_WARNINGS 1
//#include <time.h>
//#include <ctype.h>
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
///*--- ����4����ͬ���ֵ���ϲ���������x ---*/
//void make4digits(int *x,int n)
//{
//	int i, j, val;
//
//	for (i = 0; i < n; i++) {
//		do {
//			val = rand() % 10;			/* 0~9������� */
//			for (j = 0; j < i; j++)		/* �Ƿ��ѻ�ô���ֵ */
//			if (val == x[j])
//				break;
//		} while (j < i);		/* ѭ��ֱ����ò��ظ�����ֵ */
//		x[i] = val;
//	}
//}
//
///*--- �����������ַ���s����Ч�� ---*/
//int check(const char s[],int n)
//{
//	int i, j;
//
//	if (strlen(s) != n)			/* �ַ������Ȳ�Ϊ4 */
//		return 1;
//
//	for (i = 0; i < n; i++) {
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
//void judge(const char s[], const int no[], int *hit, int *blow,int n)
//{
//	int i, j;
//
//	*hit = *blow = 0;
//	for (i = 0; i < n; i++) {
//		for (j = 0; j < n; j++) {
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
//void print_result(int snum, int spos,int n)
//{
//	if (spos == n)
//		printf("�ش���ȷ!!");
//	else if (snum == 0)
//		printf("    ��Щ������û�д����֡�\n");
//	else {
//		printf("    ��Щ���������%d�������֡�\n", snum);
//
//		if (spos == 0)
//			printf("    �������ֵ�λ�ö���һ�¡�\n");
//		else
//			printf("    ������%d�����ֵ�λ����һ�µġ�\n", spos);
//	}
//	putchar('\n');
//}
//
//int main(void)
//{
//	int try_no = 0;		/* ������� */
//	int chk;			/* ��������ַ����ļ���� */
//	int hit;			/* λ�ú����ֶ���ȷ�����ָ��� */
//	int blow;			/* ������ȷ��λ�ò���ȷ�����ָ��� */
//	int* no;			/* Ҫ�µ����ִ� */
//	char buff[10];		/* ���ڴ�Ŷ�ȡ�����ִ����ַ��� */
//	int n;
//	printf("���������������λ����"); scanf("%d", &n);
//	no = malloc(n*sizeof(int));
//	clock_t	start, end;				/* ��ʼʱ��/����ʱ�� */
//
//	srand(time(NULL));				/* �趨��������� */
//
//	puts("�� ������������ɡ�");
//	printf("�� ���%d�����֡�\n",n);
//	puts("�� ���в�������ͬ���֡�");
//	puts("�� ����4307���������������֡�");
//	puts("�� ��������ո��ַ���\n");
//
//	make4digits(no,n);					/* ����n�����ָ�����ͬ�����ִ� */
//
//	start = clock();					/* ��ʼ���� */
//
//	do {
//		do {
//			printf("�����룺");
//			scanf("%s", buff);			/* ��ȡΪ�ַ��� */
//
//			chk = check(buff,n);			/* ����ȡ�����ַ��� */
//
//			switch (chk) {
//			case 1: printf("\a��ȷ������%d���ַ���",n); break;
//			case 2: puts("\a�벻Ҫ�����������������ַ���"); break;
//			case 3: puts("\a�벻Ҫ������ͬ�����֡�"); break;
//			}
//		} while (chk != 0);
//
//		try_no++;
//		judge(buff, no, &hit, &blow,n);	/* �ж� */
//		print_result(hit + blow, hit,n);	/* ��ʾ�жϽ�� */
//
//	} while (hit < n);
//
//	end = clock();						/* ������� */
//
//	printf("����%d�Ρ�\n��ʱ%.1f�롣\n",
//		try_no, (double)(end - start) / CLOCKS_PER_SEC);
//
//	return 0;
//}
//
