#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//4-1
//int main()
//{
//	int no,i;
//	do
//	{
//	printf("������һ��������");
//	scanf("%d", &no);
//		if (no == 0)
//			puts("������Ϊ0��");
//		else if (no > 0)
//			puts("������Ϊ������");
//		else
//			puts("������Ϊ������");
//		printf("�����ж�����0\n"); scanf("%d", &i);
//	} while (i == 0);
//}
//4-2
//int main()
//{
//	int a, b, c;
//	int sum = 0;
//	printf("����������a��      ");    scanf("%d", &a);
//	printf("����������b��      ");    scanf("%d", &b);
//	if (b > a)
//	{
//		c = a;
//		a = b;
//		b = c;
//	}
//	do
//	{
//		sum = sum + a;
//		a--;
//	} while (a >= b);
//	printf("sum=%d", sum);
//
//}
//4-3
//int main()
//{
//	int no;
//	printf("������һ��������");
//	scanf("%d", &no);
//	while (no > 0)
//	{
//		printf("%d", no);
//		no--;
//		printf("\n");
//	}
//	while (no < 0)
//	{
//
//		printf("%d", no);
//		no++;
//	}
//
//}
//4-4
//int main()
//{
//	int no;
//	printf("������һ��������");
//	scanf("%d", &no);
//	while (no > 0)
//		printf("%d ", no--);
//	printf("\n");
//	while (no < 0)
//		printf("%d ", no++);
//}
//4-5


//4-6
//int main()
//{
//	int i, no;
//	printf("������һ��������");
//	scanf("%d", &no);
//
//	i = 0;
//	while (i <= no-2)
//		printf("%d  ", i+=2);
//	printf("\n");
//
//}
//4-7
//int main()
//{
//		int no;
//		int i = 1;
//		printf("������һ��������");
//		scanf("%d", &no);
//		while (no < 2)
//		{
//			printf("�޽�\n");
//			break;
//		}
//		while (i < no&&no>=2)
//		{
//			printf("%d ", i *= 2);
//
//		}
//
//}
// 4-8
//int main()
//{
//	int no;
//	printf("��������");
//	scanf("%d", &no);
//	while (no-- > 0)
//	{
//		putchar('*');
//		putchar('\n');
//	}
//
//
//}
//4-9
//int main()
//{
//	int i;
//	printf("������һ��������          "); scanf("%d", &i);
//	while (i >= 0)
//	{
//		while (i % 2 == 0&&i!=0)
//		{
//			printf("-");
//			i--;
//		}
//		while (i % 2 == 1)
//		{
//
//			printf("+");
//			i--;
//
//		}
//	}
//
//
//}
//4-10
//int main()
//{
//	int i;
//	printf("������һ������           "); scanf("%d", &i);
//	while (i == 0)
//	{
//		printf("�����������\n");
//		return 0;
//	}
//	while (i > 0)
//	{
//		printf("*\n\n");
//		i--;
//	}
//}
//4-11
//int main()
//{
//	int no;
//	do{
//		printf("������һ����������");
//		scanf("%d" ,&no);
//		if (no <= 0)
//			puts("\a�벻Ҫ�������������");
//	} while (no <= 0);
//	printf("%d������ʾ�Ľ����",no);
//	while (no > 0)
//	{
//		printf("%d", no % 10);
//		no /= 10;
//	}puts("��");
//}
//4-12
//int main()
//{
//	int i,a;
//	int n = 0;
//	printf("������һ������        "); scanf("%d", &i);
//	a = i;
//	while (i >0)
//	{
//		i = i /10;
//			n++;
//	}
//	printf("%d��λ����%d",a, n);
//
//}
//4-13
//int main()
//{
//	int n, i;
//	int sum = 0;
//	printf("������һ������n�����1��n�ĺ�\n");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//		sum = sum + i;
//	printf("1��%d�ĺ�Ϊ%d\n", n, sum);
//
//
//}
//4-14
//int main()
//{
//	int n, i;
//	printf("������һ������\n"); scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//		printf("%d", i % 10);
//	printf("\n");
//}
//4-15
//int main()
//{
//	int a, b, c;
//	printf("�����뿪ʼ��ֵ(cm)      "); scanf("%d", &a);
//	printf("�����������ֵ(cm)      "); scanf("%d", &b);
//	printf("����������ֵ(cm)      "); scanf("%d", &c);
//	for (; a <=b; a += c)
//		printf("%dcm     %.2fkg\n",a,(a-100)*0.9);
//
//}
//4-16
//int main()
//{ 
//	int n,i;
//	printf("������һ���������ȫ��С������������        "); scanf("%d", &n);
//	for (i = 1; i <= n; i += 2)
//		printf("%d  ", i);
//}
//4-17
//int main()
//{
//	int n, i;
//	printf("������һ��������        "); scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//		printf("%d�Ķ��η���%d\n", i, i*i);
//}
//4-18
//int main()
//{
//	int n, i;
//	printf("������һ��������        "); scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		printf("*");
//		if (i % 5 == 0)
//			printf("\n");
//	}
//	printf("\n");
//}
//4-19
//int main()
//{
//	int n, i;
//	printf("������һ��������        "); scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	if (n%i == 0)
//		printf("%d\n\n", i);
//}
//4-20
//int main()
//{
//	int r, c, i;
//	printf("  |  1  2  3  4  5  6  7  8  9\n");
//	printf("------------------------------\n");
//	for (r = 1; r <= 9; r++)
//	{
//		for (c = 1; c <= 9; c++)
//		{
//			if (c == 1)
//				printf("%2d|", r);
//			printf("%3d", r*c);
//		}
//	printf("\n");
//	}
//}
//4-21
//int main()
//{
//	int n, a, b;
//	printf("������һ��������        "); scanf("%d", &n);
//	for (a = 1; a <= n; a++)
//	{
//		for (b = 1; b <= n; b++)
//			printf("* ");
//		printf("\n");
//	}
//}
//4-22
//int main()
//{
//	int i, n, a, b,N;
//	printf("������һ��������        "); scanf("%d", &a);
//	printf("������һ��������        "); scanf("%d", &b);
//	if (a < b)
//	{
//		i = a;
//		a=  b;
//		b = i;
//	}
//	for (N = 1; N <= b; N++)
//	{
//		for (n = 1; n <= a; n++)
//			printf("* ");
//		printf("\n");
//	}
//}
//4-23(1)
//int main()
//{
//	int n, a,b ,i;
//	printf("������һ��������        "); scanf("%d", &n);
//	i = n;
//	for (a = n; a >= 1; a--)
//	{
//		for (b =i ; b >= 1; b--)
//			printf("*");
//		printf("\n");
//		i--;
//	}
//}
//(2)
//int main()
//{
//	int n, a,b,c ,i;
//	int p = 1;
//	printf("������һ��������        "); scanf("%d", &n);
//	i = n - 1;
//	
//	for (a = n; a >= 1; a--)
//	{
//		for (b =i ; b >= 1; b--)
//			printf(" ");
//		i--;
//		for (c = 1; c <=p; c++)
//			printf("#");
//		printf("\n");
//		p++;
//	}
//}                                ����д����
//4-24
//int main()
//{
//	int i, j,k, len;
//	printf("������"); scanf("%d", &len);
//	for (i = 1; i <= len; i++)
//	{
//		for (j = 1; j <= len - i;j++)
//		putchar(' ');
//		for (j = 1; j <= i; j++)
//				putchar('*');
//			for (k = 1; k < i; k++)
//			putchar('*');
//		putchar('\n');
//	}
//}
//4-25
//int main()
//{
//	int i, j, k, n;
//	printf("����:"); scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j < i; j++)
//			printf(" ");
//		for (k = 0; k <= n - i; k++)
//			printf("%d", i % 10);
//		for (k = 0; k < n - i; k++)
//			printf("%d", i % 10);
//		printf("\n");
//	}
//}