//#define _CRT_SECURE_NO_WARNINGS 1
//#include <time.h>
//#include <stdio.h>
//#include <stdlib.h>
//
//int human;		/* 玩家的手势 */
//int comp;		/* 计算机的手势 */
//int win_no;		/* 胜利次数 */
//int lose_no;	/* 失败次数 */
//int draw_no;	/* 平局次数 */
//int round;      /* 局数*/
//
//char *hd[] = { "石头", "剪刀", "布" };		/* 手势 */
//
///*--- 初始处理 ---*/
//void initialize(void)
//{
//	win_no = 0;		/* 胜利次数 */
//	lose_no = 0;		/* 失败次数 */
//	draw_no = 0;		/* 平局次数 */
//	round = 0;          /*局数*/
//	srand(time(NULL));	/* 设定随机数种子 */
//
//	printf("猜拳游戏开始!!\n");
//}
//
///*--- 运行猜拳游戏（读取/生成手势）---*/
//void jyanken(void)
//{
//	int i;
//
//	do {
//		comp = rand() % 3;
//		printf("\n\a石头剪刀布 ···");
//		for (i = 0; i < 3; i++)
//			printf(" (%d)%s", i, hd[i]);
//		printf(":");
//		scanf("%d", &human);		/* 读取玩家的手势 */
//
//		/* 用随机数生成计算机的手势（0,2）*/
//	} while (human < 0 || human > 2);
//}
//
///*--- 更新胜利/失败/平局次数 ---*/
//
//void count_no_and_disp_result(int result)
//{
//	switch (result) {
//	case 0: puts("平局。");	draw_no++; break;	 /* 平局 */
//	case 1: puts("你输了。"); lose_no++;   break;	 /* 失败 */
//	case 2: puts("你赢了。"); win_no++;   break;	 /* 胜利 */
//	}
//}
//int main(void)
//{
//	int i,n;
//	int judge;				/* 胜负 */
//	int* p;
//	int* b;
//	printf("要猜赢几次？    "); scanf("%d", &n);
//	initialize();						/* 初始处理 */
//	if ((p = (int*)malloc(100 * sizeof(int))) == NULL)
//		return 0;
//	if ((b = (int*)malloc(100 * sizeof(int))) == NULL)
//		return 0;
//	do {
//		jyanken();						/* 运行猜拳游戏 */
//		/* 显示计算机和玩家的手势 */
//		printf("我出%s，你出%s。\n", hd[comp], hd[human]);
//
//		judge = (human - comp + 3) % 3;	/* 判断胜负 */
//		count_no_and_disp_result(judge);
//		*(p + round) = comp;
//		*(b + round) = human;
//		round++;
//	} while (win_no<n&&lose_no<n);
//	printf("%d胜%d负%d平。\n", win_no, lose_no, draw_no);
//	printf("电脑  你\n--------------------\n");
//	for (i = 0; i < round; i++)
//	{
//		/*	printf("第%d局 电脑出%s ,你出%s\n", i + 1, hd[*p], hd[*b]);*/
//		printf("%4s  %4s ", hd[*(p + i)], hd[*(b + i)]);
//		judge = (*(b + i) - *(p + i) + 3) % 3;	/* 判断胜负 */
//		count_no_and_disp_result(judge);
//	}
//	free(p);
//	free(b);
//	return 0;
//}
