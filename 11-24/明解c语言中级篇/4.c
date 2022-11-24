//#define _CRT_SECURE_NO_WARNINGS 1
//#include <windows.h>
//#include <stdio.h>
//#include <time.h>
//1-4
//int main()
//{
//	int i, j,a=0;
//	srand(time(NULL));
//	do
//	{
//		j = (rand() % 997 + 3);
//	} while (j % 3 != 0);
//	do{
//		printf("请猜一个数字(他是三的倍数3~999)吧！    ："); scanf("%d", &i);
//		if (i % 3 != 0)
//		{
//			printf("输入的不是3的倍数， 笨比   游戏结束\n");
//				break;
//		}
//		else if(i > j)
//			printf("猜大了！\n");
//		else if (i < j)
//			printf("猜小了！\n");
//		else
//		{
//			printf("猜对了！\n");
//			break;
//		}
//		a++;
//	} while (a <= 11);
//	
//}