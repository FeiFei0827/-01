//#define _CRT_SECURE_NO_WARNINGS 1
//#include <windows.h>
//#include <stdio.h>
//#include <time.h>
//#include <stdlib.h>
//1-5
//int main()
//{
//	int aaaa;
//	int i, j, a, b, c=0,k=1;
//	srand(time(NULL));
//	a = rand();
//	Sleep(50);
//	b = rand();
//	if (a < b)
//	{
//		b = a^b;
//		a = a^b;
//		b = a^b;
//	}
//	aaaa = a - b;
//	j = rand() % (aaaa+1) + b;
//	while(aaaa > 0)
//	{
//		aaaa=aaaa >> 2;
//		k++;
//	}
//	printf("猜一个数字 它位于%d~%d之间 你有%d次机会\n", b, a,k);
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
//		if (c = k)
//		printf("笨比\n");
//		else
//		printf("恭喜\n");
//	
//}