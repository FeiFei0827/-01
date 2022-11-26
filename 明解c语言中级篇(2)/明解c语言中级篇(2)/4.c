//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<time.h>
//void sleep(int x)
//{
//		clock_t c1 = clock(), c2;
//			do {
//				if ((c2 = clock()) == (clock_t)-1)	/* ´íÎó */
//					return 0;
//			} while (1000.0 * (c2 - c1) / CLOCKS_PER_SEC < x);
//			return 1;
//}
//void telop(const char *s, int direction, int speed, int n)
//{
//	char arr[100];
//	int i, m, k = 0, l = 0;
//	while (*(s + k) != '\0')
//		k++;
//	if (direction)
//	{
//		for (i = 0; i < n; i++)
//		{
//			for (m = 0; m < k; m++)
//			{
//				printf("%c", s[l%k]);
//				l++;
//			}
//			sleep(speed);
//			printf("\r                                                      \r");
//			l++;
//		}
//	}
//	else
//	{
//		for (i = 0; i < k; i++)
//		arr[i] = s[i];
//		for (i = 0; i < n; i++)
//		{
//			for (i = 0; i < k; i++)
//				printf("%c", arr[i]);
//			for (m = 0; m < k; m++)
//			{
//				arr[k - m] = arr[k - m - 1];
//			}
//			arr[0] = arr[k];
//
//			sleep(speed);
//			printf("\r                                                      \r");
//		}
//	}
//}
//int main()
//{
//	char arr[100];
//	scanf("%s", arr);
//	telop(arr,0,1000,50);
//}