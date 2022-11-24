//#define _CRT_SECURE_NO_WARNINGS 1
//#include <windows.h>
//#include <stdio.h>
//#include <time.h>
//#include <stdlib.h>
//1-6
//int main()
//{
//	int aaaa,p;
//	int i, j, a, b, c=0,k=1;
//	srand(time(NULL));
//	printf("请选择难度：0/1/2/3\n");
//	scanf("%d", &p);
//	switch (p)
//	{
//	case 0:
//			  p = 9;
//			  break;
//	case 1:
//			  p = 99;
//			  break;
//	case 2:
//              p = 999;
//			  break;
//	case 4:
//			  p = 9999;
//			  break;
//	}
//	j = rand() % p + 1;
//	printf("猜一个数字 它位于1~%d之间",p);
//	while(p > 0)
//	{
//		p=p >> 2;
//		k++;
//	}
//	printf("你有%d次机会\n", k);
//		do{
//		printf("猜：         "); scanf("%d", &i);
//		if(i > j)
//			printf("猜大了！\n");
//		else if (i < j)
//			printf("猜小了！\n");
//		else
//		{
//			printf("猜对了！\n");
//			break;
//		}
//		c++;
//	} while (c < k);
//		if (c == k)
//		printf("笨比\n");
//		else
//		printf("恭喜\n");
//	
//}