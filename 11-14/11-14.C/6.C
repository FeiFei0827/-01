#define _CRT_SECURE_NO_WARNINGS 1
#include <windows.h>
#include <stdio.h>
//6-1
//int min2(int x, int y)
//{
//	if (x > y)
//		return y;
//	else
//		return x;
//}
//int main()
//{
//	int a, b;
//	printf("请输入一个整数："); scanf("%d", &a);
//	printf("请输入一个整数："); scanf("%d", &b);
//		printf("%d", min2(a, b));
//}
//6-2
//int min3(int x, int y, int z)
//{
//	if (x <= y&&x <= z)
//		return x;
//	else if (z <= y&&z <= x)
//		return z;
//	else if (y <= x&& y<= z)
//		return y;                                               //return的值可能是只能有一个
//}
//int main()
//{
//	int a, b,c;
//	printf("请输入一个整数："); scanf("%d", &a);
//	printf("请输入一个整数："); scanf("%d", &b);
//	printf("请输入一个整数："); scanf("%d", &c);
//
//		printf("%d", min3(a, b, c));
//}
//
//
//6-3
//int cube(int x)
//{
//	return	x*x*x;
//}
//int main()
//{
//	int a;
//	printf("请输入一个整数："); scanf("%d", &a);
//	printf("%d", cube(a));
//}
//6-4
//int sqr(int x)
//{
//	return x*x;
//}
//int pow4(int x)
//{
//	return sqr(x)*sqr(x);
//}
//int main()
//{
//	int a;
//	printf("请输入一个整数："); scanf("%d", &a);
//	printf("%d", pow4(a));
//}
//6-5
//int sumup(int n)
//{
//	int i;
//	int sum = 0;
//	for (i = 1; i <= n; i++)
//		sum = sum + i;
//	return sum;
//}
//int main()
//{
//	int a;
//	printf("请输入一个整数："); scanf("%d", &a);
//	printf("%d", sumup(a));
//}
//6-6
//void alert (int x)
//{
//	int i;
//	for (i = 0; i < x; i++)
//	{
//		printf("\a");
//		Sleep(1 * 1000);  //可以产生间隔
//	}
//}
//void main()
//{
//	int a;
//	printf("请输入一个整数："); scanf("%d", &a);
//	alert(a);
//}
//6-7
//void hello()
//{
//	printf("你好。\n");
//}
//int main()
//{
//6-8
//int min_of( int v[], int n)
//{
//	int i = 0;
//	for (i = 0; i < n-1 ;i++)
//	{
//		if (v[i] < v[i + 1]);
//		else
//			v[i] = v[i + 1];
//	}
//	return (v[i]);
//
//	}
//int main()
//{
//	int arr[5] = { 1, 4, 5, 65, 1 };
//	printf("%d\n",min_of(arr, 5));
//	
//}
//void min_of(int v[], int n)
//{
//	int i = 0;
//	for (i = 0; i < n - 1; i++)
//	{
//		if (v[i] < v[i + 1]);
//		else
//			v[i] = v[i + 1];
//	}
//	printf("%d\n", v[i]);
//
//}
//int main()
//{
//	int arr[5] = { 1, 4, 5, 65, 1 };
//	min_of(arr, 5);
//}
//6-9
//void rev_intary(int v[], int n)
//{
//	int swap, i;
//	for (i = 0; i < (n + 1) / 2; i++)
//	{
//		swap =v[i];
//		v[i] = v[n - 1 - i];
//		v[n - 1 - i] = swap;
//	}
//}
//int main()
//{
//	int i;
//	int arr[6] = { 1, 2, 3, 4, 5, 8 };
//	rev_intary(arr, 6);
//	for (i = 0; i < 6; i++)
//		printf("%d\n", arr[i]);
//
//}
//6-10
//void intary_rcpy(int v[], const int v2[], int n)
//{
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		v[i] = v2[n - 1 - i];
//		printf("%d", v[i]);
//	}
//}
//#define NUMBER 5
//int main()
//{
//	int arr1[NUMBER] = { 3, 3, 3, 3, 3 };
//	int arr2[NUMBER] = { 1, 2, 3, 4, 5 };
//		intary_rcpy(arr1, arr2, NUMBER);
//}
//int search_idx(const int v[], int idx[], int key, int n)
//{
//	int i;
//    int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (key == v[i])
//		{
//			idx[j] = i;
//			j++;
//		}
//	}
//	return(j);                                          看语句的位置 不要进入循环
//}
//#define NUMBER 5
//int main()
//{
//	int arr1[NUMBER] = { 1, 1, 1, 1, 4 };
//	int arr2[NUMBER];
//	printf("%d\n",search_idx(arr1, arr2, 1, NUMBER));
//
//}
//6-12
//void mat_mul(const int a[4][3], const b[3][4], int c[4][4])
//{
//	int i, j;
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			c[i][j] = a[i][j] * b[i][j];
//		}
//	}
//}         
//int main()
//{                                                                      for()后面不加分号！！！！！！！！！！！！！！
//	int a[4][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 11, 12 };
//	int b[3][4] = { 1, 2, 3, 4, 5, 6, 7, 1, 2, 3, 4, 5, };
//	int c[4][4];
//	int i, j;
//	mat_mul(a, b, c);
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 4; j++)
//			printf("%d\n", c[i][j]);
//	}
//}
//6-13
//没啥意义
//6-14
//int main()
//{
//	static double arr[10] = { 0.0, 0.0 };
//
//}
//6-15
//static int i = 0;
//void put_count()
//{
//	i++;
//	printf("put_count: 第%d次\n", i);
//}
//
//int main()
//{
//	put_count();
//	put_count();
//	put_count();
//	put_count();
//	put_count();
//	put_count();
//	put_count();
//	put_count();
//	put_count();
//
//}
