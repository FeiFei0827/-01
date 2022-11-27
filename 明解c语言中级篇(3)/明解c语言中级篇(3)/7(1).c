#define _CRT_SECURE_NO_WARNINGS 1
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h> 
#define NUM 2		/* 玩家的手势 */
int human_comp[NUM+1] = {0};		/* 计算机的手势 */
int won_[3] = {0};
char *hd[] = { "石头", "剪刀", "布" };		/* 手势 */

/*--- 初始处理 ---*/
void initialize(void)
{
	int i;
	for (i = 0; i < NUM; i++)
		human_comp[i] = 0;
	for (i = 0; i < NUM; i++)
	{
		won_[i]= 0;
	
	}
	srand(time(NULL));	/* 设定随机数种子 */

	printf("猜拳游戏开始!!\n");
}

/*--- 运行猜拳游戏（读取/生成手势）---*/
void jyanken()
{
	int i;
	for (i = 0; i < NUM; i++)
	{
		human_comp[i] = rand() % 3;
		Sleep(10);
	}
	/* 用随机数生成计算机的手势（0~2）*/

	do {
		printf("\n\a石头剪刀布 ···");
		for (i = 0; i < 3; i++)
			printf(" (%d)%s", i, hd[i]);
		printf(":");
		scanf("%d", &human_comp[NUM]);		/* 读取玩家的手势 */
	} while (human_comp[NUM] < 0 || human_comp[NUM] > 2);
}

/*--- 更新胜利/失败/平局次数 ---*/
void judge()
{
	int i,j;
	int sign = 0;
	for (j = 0; j < NUM + 1; j++)
	{
		for (i = 0; i < NUM + 1; i++)
		{
			if (human_comp[i] == j)
			{
				sign++;
				break;
			}
		}
	}
	if (sign == 3 || sign == 1)
	{
		won_[2]++;
		printf("平局。");
	}
	else
	{
		if ((human_comp[NUM] - human_comp[0] + 3) % 3 == 2)
		{
			won_[0]++;
			printf("你赢了。");
		}
		else
		{
			won_[1]++;
			printf("你输了。");
		}
	}

	printf("\n");
}

/*--- 确认是否再次挑战 ---*/
int confirm_retry(void)
{
	int x;

	printf("再来一次吗···(0)否 (1)是：");
	scanf("%d", &x);

	return x;
}

int main(void)
{
	int i;			/* 胜负 */
	int retry;				/* 再来一次？*/

	initialize();						/* 初始处理 */

	do {
		jyanken();						/* 运行猜拳游戏 */

		/* 显示计算机和玩家的手势 */
		for (i = 0; i < NUM; i++)
			printf("电脑%d出%s  ", i + 1, hd[human_comp[i]]);
		printf("你出%s。\n", hd[human_comp[NUM]]);

		judge();/* 判断胜负 */
		retry = confirm_retry();		/* 确认是否再次挑战 */

	} while (retry == 1);

	printf("%d胜%d负%d平。\n", won_[0], won_[1], won_[2]);

	return 0;
}

