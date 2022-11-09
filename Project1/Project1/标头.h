#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define R 5
#define C 5
void test(int arr[R][C])
{
	int i, j;
	for (i = 0; i < R; i++)
	{
		for (j = 0; j < C; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
void game_start()
{
	printf("#################################################################\n");
	printf("#############################开始游戏############################\n");
	printf("##请输入：                     1/0                               \n");
	printf("############1.开始    ###################0.结束    ##############\n");
	printf("#################################################################\n");
	printf("#################################################################\n");
	printf("#################################################################\n");
	printf("#################################################################\n");


}
void gezi(int x[R][C])
{
	int i, j, k;
	for (i = 0; i < R; i++)
	{
		for (j = 0; j < C; j++)
		{
			if (x[i][j] == 0)
				printf("   |");
			else if (x[i][j] ==-1)
				printf(" * |");
			else if (x[i][j]==1)
				printf(" # |");
		}
		printf("\n");
		for (k = 0; k < C; k++)
			printf("----");
		printf("\n");
	}
}
void computer(int arr[R][C])
{
	int a, b;
	srand((unsigned)time(NULL));/*随机数种子*/
	do
	{
	a = rand()%4;
	b = rand()%4;
		if (arr[a][b] == 0)
		{
			arr[a][b] = -1;
			break;
		}

	} while (1);
}	
void game()
{
	int x, y;
	int arr[R][C] = { 0 };
	do
	{
		do
		{

			printf("请输入棋子的坐标:x,y          ");          scanf("%d%*c%d", &x, &y);
			if(arr[x - 1][y - 1] !=0)
				printf("这个格子有棋子了\n");
		}while (arr[x - 1][y - 1] !=0);
		arr[x - 1][y - 1] = 1;
	computer(arr);
	gezi(arr);
	/*test(arr);*/
	} while (win(arr));
}
int sum1(int arr[R][C],int n)
{
	int i = 0, sum = 0;
	for (i = 0; i < R; i++)
		sum = sum + arr[n][i];
	return (sum);
}
int sum2(int arr[R][C], int n)
{
	int i = 0, sum = 0;
	for (i = 0; i < R; i++)
		sum = sum + arr[i][n];
	return(sum);
}
int sum3(int arr[R][C])
{
	int i = 0, sum = 0;
	for (i = 0; i < R; i++)
		sum = sum + arr[i][i];
	return(sum);
}
int sum4(int arr[R][C])
{
	int i = 0, sum = 0;
	for (i = 0; i < R; i++)
		sum = sum + arr[i][C-1-i];
	return(sum);
}

int win(int arr[R][C])
{
	int i, j;
	for (i = 0; i < R; i++)
	{
		if (sum1(arr, i) == R || sum2(arr, i) == R || sum3(arr) == R || sum4(arr) == R)
		{
			printf("你赢了\n");
			return 0;
		}
		else if (sum1(arr, i) == -R || sum2(arr, i) == -R || sum3(arr) == -R || sum4(arr) == -R)
		{
			printf("你输了\n");
			return 0;
		}

	}

}
