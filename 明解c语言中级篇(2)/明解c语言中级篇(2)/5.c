//#define _CRT_SECURE_NO_WARNINGS 1
//#include <time.h>
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(void)
//{
//	int stage;
//	int a, b, c;			/* Ҫ���мӷ��������ֵ */
//	int x;					/* �Ѷ�ȡ��ֵ */
//	int n;					/* �հ׵Ŀ�� */
//	double arr[11] = { 0 };
//	clock_t	start, end;		/* ��ʼʱ�䡤����ʱ�� */
//
//	srand(time(NULL));		/* �趨����������� */
//
//	printf("������Ұ����ѵ����ʼ!!\n");
//
//	for (stage = 0; stage < 10; stage++) {
//		a = 10 + rand() % 90;		/* ����10��99������� */
//		b = 10 + rand() % 90;		/* ������������������ */
//		c = 10 + rand() % 90;		/* ������������������ */
//		n = rand() % 17;			/* ����0��16�������  */
//		start = clock();
//
//		printf("%d%*s+%*s%d%*s+%*s%d��", a, n, "", n, "", b, n, "", n, "", c);
//
//		do {
//			scanf("%d", &x);
//			if (x == a + b + c)
//				break;
//			printf("\a�ش�������������룺");
//		} while (1);
//			end = clock();
//			arr[stage] = (end-start) / CLOCKS_PER_SEC;
//	}
//
//				/* ������� */
//	for (stage = 0; stage < 10; stage++)
//	{
//      printf("��%d�� ��ʱ%.1f�롣\n", stage+1,arr[stage]);
//	  arr[10] += arr[stage];
//	}
//	printf("ÿ����ƽ����ʱ%f��\n", arr[10] / 10);
//	return 0;
//}
