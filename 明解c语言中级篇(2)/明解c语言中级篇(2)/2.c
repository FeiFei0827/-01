//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <time.h>
//void sleep(unsigned long int x)
//{
//	clock_t c1 = clock(), c2;
//		do {
//			if ((c2 = clock()) == (clock_t)-1)	/* ´íÎó */
//				return 0;
//		} while (1000.0 * (c2 - c1) / CLOCKS_PER_SEC < x);
//		return 1;
//}
//void qput(const char *s, int speed)
//{
//	char a;
//	while ((a = *s++) != '\0')
//	{
//		printf("%c", a);
//		sleep(speed);
//	}
//}
//int main()
//{
//	char arr[100];
//	scanf("%s", arr);
//	qput(arr, 100);
//}