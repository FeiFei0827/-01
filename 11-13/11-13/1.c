#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//5-1
//int main()
//{
//	int i;
//	int v[5];
//	for (i = 0; i < 5; i++)
//		v[i] = i;
//	for (i = 0; i < 5; i++)
//		printf("v[%d] = %d\n", i, v[i]);
//
//}
//5-2
//int main()
//{
//	int i;
//	int v[5];
//	for (i = 0; i < 5; i++)
//		v[i] = 5-i;
//	for (i = 0; i < 5; i++)
//		printf("v[%d] = %d\n", i, v[i]);
//
//}
//5-3
//int main()
//{
//	int i;
//	int v[5] = {5,4,3,2,1 };
//	for (i = 0; i < 5; i++)
//		printf("v[%d] = %d\n", i, v[i]);
//
//}
//5-4
//int main()
//{
//	int i;
//	int a[5] = { 17, 23, 36, 0, 0 };
//	int b[5];
//	for (i = 0; i < 5; i++)
//		b[i] = a[4-i];            //Ӧ��4-i ����4ָ�±� ���׳����С�ط�
//	puts("a   b");
//	puts("_______");
//	for (i = 0; i < 5; i++)
//		printf("%4d%4d\n", a[i], b[i]);
//}
//5-5
//#define N 10
//int main()
//{
//	int i;
//	int x[N];
//
//	for (i = 0; i< N; i++)
//	{
//		printf("x[%d]:", i);
//		scanf("%d", &x[i]);
//	}
//	for (i = 0; i < 3; i++)
//	{
//		int temp = x[i];
//		x[i] = x[N-1 - i];
//		x[N-1 - i] = temp;
//	}
//	puts("���������ˡ�");
//	for (i = 0; i < N; i++)
//		printf("x[%d] = %d\n", i, x[i]);
//}
//5-6
//int main()
//{
//	double a;
//	int b;
//	a = b = 1.5;
//	printf("a=%f ,b=%d", a, b);
//}
//5-7
//#define NUMBER 80
//int main()
//{
//	int n, i,j;
//	int data[NUMBER];
//	printf("���������ݸ���          ");
//	do
//	{
//		; scanf("%d", &n);
//		if (n<1 || n>NUMBER)
//			printf("������1~%d������",NUMBER);
//	} while (n<1 || n>NUMBER);
//	printf("����������\n");
//	for (i = 0; i < n; i++)
//	{
//		printf("%2d�ţ�", i + 1);
//		scanf("%d", &data[i]);
//	}
//	printf("{");
//	for (j = 0; j < n; j++)
//	{
//		if (j < n - 1)
//			printf("%d, ", data[j]);
//		else
//			printf("%d}", data[j]);
//	}
//}
//5-8
//#include <stdio.h>
//
//#define NUMBER 80
//
//int main()
//{
//	int i, j;
//	int num;
//	int score[NUMBER];
//	int scattergram[11] = { 0 };//�ֲ�ͼ,���ʼ��
//
//	printf("������ѧ��������");
//
//	do{
//		scanf("%d", &num);
//		if (num<1 || num>NUMBER)
//		{
//			printf("������1~%d֮���������", NUMBER);
//		}
//	} while (num<1 || num>NUMBER);
//
//	printf("������%d�˵ķ�����\n", num);
//	for (i = 0; i<num; i++)
//	{
//		printf("%d�ţ�", i + 1);
//		do{
//			scanf("%d", &score[i]);
//			if (score[i]<0 || score[i]>100)
//			{
//				printf("������0~100֮���������");
//			}
//		} while (score[i]<0 || score[i]>100);
//		scattergram[score[i] / 10]++;//�ֲ�ͼ�������е���������
//	}
//
//	puts("---�ֲ�ͼ---");
//	printf("  100��");
//	for (i = 0; i<scattergram[10]; i++)
//	{
//		putchar('*');
//	}
//	putchar('\n');
//
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%2d-%2d��", i * 10, i * 10 + 9);
//		for (j = 0; j<scattergram[i]; j++)
//		{
//			putchar('*');
//		}
//		putchar('\n');
//	}
//
//	return 0;
//}
//#define NUMBER 80
//
//int main()
//{
//	int i, j;
//	int num;
//	int score[NUMBER];
//	int scattergram[11] = { 0 };//�ֲ�ͼ,���ʼ��
//
//	printf("������ѧ��������");
//
//	do{
//		scanf("%d", &num);
//		if (num<1 || num>NUMBER)
//		{
//			printf("������1~%d֮���������", NUMBER);
//		}
//	} while (num<1 || num>NUMBER);
//
//	printf("������%d�˵ķ�����\n", num);
//	for (i = 0; i<num; i++)
//	{
//		printf("%d�ţ�", i + 1);
//		do{
//			scanf("%d", &score[i]);
//			if (score[i]<0 || score[i]>100)
//			{
//				printf("������0~100֮���������");
//			}
//		} while (score[i]<0 || score[i]>100);
//		scattergram[score[i] / 10]++;//�ֲ�ͼ�������е��������� ��Ҫ
//	}
//
//	puts("---�ֲ�ͼ---");
//
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%2d-%2d��",(9- i) * 10,(9 - i) * 10 + 9);
//		for (j = 0; j<scattergram[9-i]; j++)
//		{
//			putchar('*');
//		}
//		putchar('\n');
//	}
//	printf("  100��");
//	for (i = 0; i<scattergram[10]; i++)
//	{
//		putchar('*');
//	}
//	putchar('\n');
//
//	return 0;
//}
//5-9
//#define NUM 100
//int main()
//{
//	int n, i, j,b;
//	int a = 0,c=0;
//	int yaoyao[11] = { 0 };
//	do
//	{
//		printf("���������ݸ���      :"); scanf("%d", &n);
//		if (n<1 || n>NUM)
//			printf("����ֵ����Ӧ�������0С��%d����\n", NUM);
//	} while (n<1 || n>NUM);
//	for (i = 0; i < n; i++)
//	{
//		do
//		{
//			printf("��������%d:   ", i + 1); scanf("%d", &j);
//			if (j<0 || j>100)
//				printf("����ֵ����Ӧ������ڵ���0С�ڵ���100����\n");
//		} while (j<0 || j>100);
//		yaoyao[j / 10]++;
//	}
//	for (i = 0; i < n; i++)
//	{
//		a = 0, c=0;
//		for (b = 0; b<11; b++)
//		{
//			if (n-yaoyao[a]>0)
//			{
//				printf("    ");
//				yaoyao[a] += 1;
//			}
//			else
//				printf("   *");
//			a++;
//		}
//		printf("\n");
//	}
//	printf("----------------------------------------------\n");
//	printf("   0  10  20  30  40  50  60  70  80  90  100 \n");
//}
//for (i = 0; i < n; i++)
//{
//	a = 0;
//	for (b = 0; b<11; b++)
//	{
//		if (yaoyao[a]>0)
//		{
//			printf("   *");
//			yaoyao[a] = yaoyao[a] - 1;
//		}
//		else
//			printf("    ");
//		a++;
//	}
//	printf("\n");
//}
//5-10
//int main()
//{
//	int i, j, k;
//	int yaoyao1[4][3];
//	int yaoyao2[3][4];
//	int yaoyao3[3][3];
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 3; j++)
//
//		{
//			printf("������yaoyao1��%d�е�%d�е����ݣ�  ", i + 1, j + 1); scanf("%d", &yaoyao1[i][j]);
//		}
//	}
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//
//		{
//			printf("������yaoyao2��%d�е�%d�е����ݣ�  ", i + 1, j + 1); scanf("%d", &yaoyao2[i][j]);
//		}
//	}
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//
//			printf("%3d ", yaoyao1[i][j]);
//		}
//		printf("\n");
//	}
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//
//			printf("%3d ", yaoyao2[i][j]);
//		}
//		printf("\n");
//	}
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//		
//			yaoyao3[i][j] = yaoyao1[i][j] * yaoyao2[i][j];
//			printf("%3d ", yaoyao3[i][j]);
//		}
//		printf("%3d ", yaoyao2[i][j]);
//		printf("\n");
//	}
//
//	for (j = 0; j < 3; j++)
//		printf("%3d ", yaoyao1[i][j]);
//	printf("\n");
//
// �����и����ش��� ���е��±궼�Ǵ�0��ʼ ��arr[i][j]i��ʾ������j��ʾ���� ��Ԫ���±��޹� Ҫ����� ��Ȼ�ᵼ������
//5-11
//int main()
//{
//	int score[2][6];
//	int yaoyao[6];
//	int i, sum1 = 0, sum2 = 0;
//	for (i = 0; i < 6; i++)
//	{
//		printf("������ѧ��%d���ĳɼ���  ",i+1 ); scanf("%d", &score[0][i]);
//	}
//	for (i = 0; i < 6; i++)
//	{
//		printf("������ѧ��%d��ѧ�ɼ���  ",i+1 ); scanf("%d", &score[1][i]);
//	}
//	for (i = 0; i < 6; i++)
//	{
//		sum1 = sum1 + score[0][i];
//		sum2 = sum2 + score[1][i];
//		yaoyao[i] = score[0][i] + score[1][i];
//		printf("ѧ��%d�ܷ֣�%3d ��ƽ���֣�%3f \n", i + 1, yaoyao[i], yaoyao[i] / 2.0);
//	}
//	printf("���ĵ��ܷ֣�%3d ��ƽ���֣�%3f \n", sum1, sum1 / 6.0);
//	printf("��ѧ���ܷ֣�%3d ��ƽ���֣�%3f \n", sum2, sum2 / 6.0);
//}
//5-12	
//int main()
//{
//	int i, j, k;
//	int tensu1[4][3];
//	int tensu2[4][3];
//	int tensu[2][4][3];
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			for (k = 0; k < 3; k++)
//			{
//				tensu[i][j][k] = tensu[j][k];
//			}
//		}
//	}
//
//	 
//}