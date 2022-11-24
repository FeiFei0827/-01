//#define _CRT_SECURE_NO_WARNINGS 1
//#include <windows.h>
//#include <stdio.h>
//#include <time.h>
//1-2
//int main()
//{
//	int i, j;
//	printf("抽签输入1 否则输入0\n"); scanf("%d", &i);
//	if (!i)
//		return 0;
//	srand(time(NULL));
//	j = rand() % 13;
//	switch (j)
//	{
//
//	case 0:
//		printf("大吉\n");
//		break;
//	case 1:
//		printf("中吉\n");
//		break;
//	case 2:
//		printf("小吉\n");
//		break;
//	case 3:
//		printf("吉\n");
//		break;
//	case 4:
//		printf("末吉\n");
//		break;
//	case 5:
//		printf("凶\n");
//		break;
//	case 6:
//	case 7:
//	case 8:
//	case 9:
//	case 10:
//	case 11:
//	case 12:
//		printf("大凶\n");
//		break;
//	}