#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <time.h>
13-1
int main()
{
	FILE *fp;
	char a[64];
	printf("请输入文件名:   "); scanf("%s", a);
	fp = fopen(a, "r");  //需要与.c文件处于相同文件夹中 这是相对路径
	if (fp == NULL)
		printf("该文件存在。\n");
	else
	{
		printf("该文件不存在。\n");
		fclose(fp);
	}
}
13-2
int main()
{
	FILE *fp;
	char a[64];
	printf("请输入文件名:   "); scanf("%s", a);
	fp = fopen(a, "w");  //清空了文件内容
	if (fp == NULL)
		return 0;
		fclose(fp);
}
13-3
struct ren
{
	char name[100];
	double height;
	double weight;
};
int compar(const void * a, const void * b)
{
	return ((*(struct ren*)b).height - (*(struct ren*)a).height);
}

int main()
{
	int i = 0,j=0;
	FILE *fp;
	int ninzu = 0;
	struct ren gaga[10] = {0};//这里不初始化便会产生一些问题 height的随机值可能会大于有效数的值
	double wsum = 0.0;
	if ((fp = fopen("abc.txt", "r")) == NULL)
		printf("文件打开失败\n");
	else
	{
		while (fscanf(fp, "%s%lf%lf", &gaga[i].name, &gaga[i].height, &gaga[i].weight) == 3)
			i++;
	}
	qsort(gaga, 10, sizeof(struct ren), compar);

	for (j = 0; j < i;j++)
	{
		printf("%-10s %5.1f %5.1f\n", gaga[j].name, gaga[j].height, gaga[j].weight);
	}
	printf("_____________________________________\n");
}
8-14
struct ren
{
	char name[100];
	double height;
	double weight;
};
int main()
{
	int i = 0, j = 0;
	FILE *fp;
	int ninzu = 0;
	struct ren gaga[10] = { 0 };//这里不初始化便会产生一些问题 height的随机值可能会大于有效数的值
	double wsum = 0.0;
	if ((fp = fopen("123.txt", "w")) == NULL)
		printf("文件打开失败\n");
	else
	{
		while (scanf("%s%lf%lf", &gaga[i].name, &gaga[i].height, &gaga[i].weight) == 3)         //输入EOF 结束输入
			i++;
	}

	for (j = 0; j < i; j++)
	{
		fprintf(fp,"%-10s %5.1f %5.1f\n", gaga[j].name, gaga[j].height, gaga[j].weight);
	}
	printf("_____________________________________\n");
}
网上的答案
#include <stdio.h>
#define ninzu 4


typedef struct {
	char  name[100];    /* 姓名 */
	int   height;     /* 身高 */
	int   weight;       /* 体重 */
} Student;
int main(void)
{

	FILE* fp;
	if ((fp = fopen("gaoji", "w")) == NULL)                /* 打开文件 */
		printf("\a文件打开失败。\n");
	else {
		int i;
		Student stu[] = { { 0 }, { 0 }, { 0 }, { 0 }, { 0 }
		};
		puts("输入姓名，身高，体重");
		for (i = 0; i < ninzu; i++) {
			scanf("%s%d%d", stu[i].name, &stu[i].height, &stu[i].weight);
			fprintf(fp, "%s %d %d\n", stu[i].name, stu[i].height, stu[i].weight);
		}
		fclose(fp);
	}
	return 0;

}// 这种方法显然更好 内存占用较少 并且根据人数停止程序 
13-5
#include <time.h>
#include <stdio.h>

char data_file[] = "gagaga.txt";				/* 文件名 */

/*--- 取得并显示上一次运行时的日期和时间 ---*/
void get_data(void)
{
	FILE *fp;

	if ((fp = fopen(data_file, "r")) == NULL)				/* 打开文件 */
		printf("本程序第一次运行。\n");
	else {
		int year, month, day, h, m, s;
		char mob[100];

		fscanf(fp, "%d%d%d%d%d%d%s", &year, &month, &day, &h, &m, &s ,mob);
		printf("上一次运行是在%d年%d月%d日%d时%d分%d秒 心情：%s\n",
			year, month, day, h, m, s, mob);
		fclose(fp);											/* 关闭文件 */
	}
}

/*--- 写入本次运行时的日期和时间 ---*/
void put_data(void)
{
	char a[100];
	FILE *fp;
	time_t current = time(NULL);				/* 当前日历时间 */
	struct tm *timer = localtime(&current);		/* 分解时间*/
	 
	if ((fp = fopen(data_file, "w")) == NULL)				/* 打开文件 */             //如果不存在该名称的文件 将会创建一个
		printf("\a文件打开失败。\n");
	else {
		printf("请输入当前的心情："); scanf("%s", a);
		fprintf(fp, "%d %d %d %d %d %d %s",
			timer->tm_year + 1900, timer->tm_mon + 1, timer->tm_mday,
			timer->tm_hour, timer->tm_min, timer->tm_sec,a);
			fclose(fp);									/* 关闭文件 */
	}
}

int main(void)
{
	get_data();			/* 取得并显示上一次运行时的日期和时间 */

	put_data();			/* 写入本次运行时的日期和时间 */

	return 0;
}
13-6
int main()
{
	int ch, i = 0;
	FILE *fp;
	char fname[100];
	printf("请输入文件名："); scanf("%s", fname);
	if ((fp = fopen(fname, "r")) == NULL)
		printf("文件打开失败！\n");
	else
	{
		while ((ch = fgetc(fp)) != EOF) {
			if (ch == '\n')
			{
				i++;
			}
		}
		printf("%d行", i);
	}
}
13-7
int main()
{
	int ch, i = 0;
	FILE *fp;
	char fname[100];
	printf("请输入文件名："); scanf("%s", fname);
	if ((fp = fopen(fname, "r")) == NULL)
		printf("文件打开失败！\n");
	else
	{
		while ((ch = fgetc(fp)) != EOF) {
				i++;
		}
		printf("%d", i);
	}
}
int main(void)
{
	int  ch;
	int cnt = 0;
	FILE* fp;
	char fname[FILENAME_MAX];        /* 文件名 */

	printf("文件名：");
	scanf("%s", fname);

	if ((fp = fopen(fname, "r")) == NULL)                    /* 打开文件 */
		printf("\a文件打开失败。\n");
	else {
		while ((ch = fgetc(fp)) != EOF) {
			putchar(ch);
			if (ch >' ')   //不计算空白字符 转义字符等“不常规的字符”
			{
				cnt++;
			}
		}
		printf("字符数：%d", cnt);
		fclose(fp);                                            /* 关闭文件 */
	}

	return 0;
}
13-8
int main(void)
{
	int ch;
	FILE *sfp;						/* 原文件 */
	FILE *dfp;						/* 目标文件 */
	char sname[FILENAME_MAX];		/* 原文件名 */
	char dname[FILENAME_MAX];		/* 目标文件名 */

	printf("打开原文件：");   scanf("%s", sname);
	printf("打开目标文件：");   scanf("%s", dname);

	if ((sfp = fopen(sname, "r")) == NULL)			/* 打开原文件 */
		printf("\a原文件打开失败。\n");
	else {
		if ((dfp = fopen(dname, "w")) == NULL)		/* 打开目标文件 */
			printf("\a目标文件打开失败。\n");
		else {
			while ((ch = fgetc(sfp)) != EOF)
			{
				fputc(ch, dfp);
				fprintf(stdout,"%c", ch);
			}
			fclose(dfp);						/* 关闭目标文件 */
		}
		fclose(sfp);							/* 关闭原文件 */
	}

	return 0;
}
int gaga(char str[])
{
	// str为字符指针，指向一个字符字面量，这个字符字面量由'\0'结尾
	// chr为字符指针，指向str所指向的字符字面量的第一个字符的地址，即'你'字符的两个char中的第一个
	char *chr = str;

	printf("%zu %s\n", strlen(str), str);
	// 如果遇到'\0'，说明字符串结束了
	while (*chr != '\0')
	{
		// 如果chr的编码为负数，则说明遇到了一个汉字
		if (*chr < 0)
		{
			// 打印汉字及汉字的编码
			// 注意两个char必须紧紧跟着打印（%c%c），否则会打印出 ?? 
			printf("%c%c\n", *chr, *(chr + 1));
			// chr自增两个字节（因为每个汉字都由两个char组成）
			chr += 2;
		}
		else
		{
			// 打印英文字符
			printf("%c", *chr);
			// chr自增一个字节
			++chr;
		}
	}

	return 0;
}

13-9
int main(void)
{
	int ch;
	FILE *sfp;						/* 原文件 */
	FILE *dfp;						/* 目标文件 */
	char sname[FILENAME_MAX];		/* 原文件名 */
	char dname[FILENAME_MAX];		/* 目标文件名 */

	printf("打开原文件：");   scanf("%s", sname);
	printf("打开目标文件：");   scanf("%s", dname);

	if ((sfp = fopen(sname, "r")) == NULL)			/* 打开原文件 */
		printf("\a原文件打开失败。\n");
	else {
		if ((dfp = fopen(dname, "w")) == NULL)		/* 打开目标文件 */
			printf("\a目标文件打开失败。\n");
		else {
			while ((ch = fgetc(sfp)) != EOF)
			{
				if (ch >= 'a'&&ch =< 'z')
					ch -= 32;
				fputc(ch, dfp);
				fprintf(stdout,"%c", ch);
			}
			fclose(dfp);						/* 关闭目标文件 */
		}
		fclose(sfp);							/* 关闭原文件 */
	}

	return 0;
}
13-10
int main(void)
{
	int ch;
	FILE *sfp;						/* 原文件 */
	FILE *dfp;						/* 目标文件 */
	char sname[FILENAME_MAX];		/* 原文件名 */
	char dname[FILENAME_MAX];		/* 目标文件名 */

	printf("打开原文件：");   scanf("%s", sname);
	printf("打开目标文件：");   scanf("%s", dname);

	if ((sfp = fopen(sname, "r")) == NULL)			/* 打开原文件 */
		printf("\a原文件打开失败。\n");
	else {
		if ((dfp = fopen(dname, "w")) == NULL)		/* 打开目标文件 */
			printf("\a目标文件打开失败。\n");
		else {
			while ((ch = fgetc(sfp)) != EOF)
			{
				if (ch >= 'A'&&ch =< 'Z')
					ch += 32;
				fputc(ch, dfp);
				fprintf(stdout,"%c", ch);
			}
			fclose(dfp);						/* 关闭目标文件 */
		}
		fclose(sfp);							/* 关闭原文件 */
	}

	return 0;
}
13-11
int main(void)
{
	FILE* fp;
	double v[10];
	int i;

	for (i = 0; i < 10; i++) {
		printf("v[%d]=", i);
		scanf("%lf", &v[i]);
	}

	if ((fp = fopen("abc.txt", "wb")) == NULL)       
		printf("\a文件打开失败。\n");
	else {
		fwrite(&v, sizeof(double), 10, fp);
		fclose(fp);
	}                                               

	if ((fp = fopen("abc.txt", "rb")) == NULL)       
		printf("\a文件打开失败。\n");
	else {
		fread(&v, sizeof(double), 10, fp);
		for (i = 0; i < 10; i++) {
			printf("v[%d]=%.2f\n", i, v[i]);
		}


		fclose(fp);                                   
	}

	return 0;
}
13-12

char data_file[] = "date.txt";				/* 文件名 */

/*--- 取得并显示上一次运行时的日期和时间 ---*/
void get_data(void)
{
	FILE *fp;
	struct tm timer[20];
	if ((fp = fopen(data_file, "rb")) == NULL)				/* 打开文件 */
		printf("本程序第一次运行。\n");
	else {
		int year, month, day, h, m, s;
		fread(timer, 4, 6, fp);
		printf("上一次运行是在%d年%d月%d日%d时%d分%d秒。\n",
			timer->tm_year + 1900, timer->tm_mon + 1, timer->tm_mday,
			timer->tm_hour, timer->tm_min, timer->tm_sec);                           //要和指针相联系
		fclose(fp);											/* 关闭文件 */
	}
}

/*--- 写入本次运行时的日期和时间 ---*/
void put_data(void)
{
	FILE *fp;
	time_t current = time(NULL);				/* 当前日历时间 */
	struct tm *timer = localtime(&current);		/* 分解时间*/

	if ((fp = fopen(data_file, "wb")) == NULL)				/* 打开文件 */
		printf("\a文件打开失败。\n");
	else {
		fwrite(timer, 4, 6, fp);
		fclose(fp);											/* 关闭文件 */
	}
}
 
int main(void)
{
	get_data();			/* 取得并显示上一次运行时的日期和时间 */

	put_data();			/* 写入本次运行时的日期和时间 */

	return 0;
}
13-13
int main(void)
{
	int ch;
	FILE *sfp;						/* 原文件 */
	FILE *dfp;						/* 目标文件 */
	char sname[FILENAME_MAX];		/* 原文件名 */
	char dname[FILENAME_MAX];		/* 目标文件名 */
	int p[20];
	printf("打开原文件：");   scanf("%s", sname);
	printf("打开目标文件：");   scanf("%s", dname);

	if ((sfp = fopen(sname, "r")) == NULL)			/* 打开原文件 */
		printf("\a原文件打开失败。\n");
	else {
		if ((dfp = fopen(dname, "w")) == NULL)		/* 打开目标文件 */
			printf("\a目标文件打开失败。\n");
		else {
			do
			{
				fread(p, 1, 1, sfp);
				fwrite(p, 1, 1, dfp);
			}while (*p != EOF);

					/* 关闭目标文件 */
		}
		fclose(sfp);							/* 关闭原文件 */
	}

	return 0;
}
答案

int main(void)
{
	int n;
	int ch;
	FILE *sfp;						/* 原文件 */
	FILE *dfp;						/* 目标文件 */
	char sname[FILENAME_MAX];		/* 原文件名 */
	char dname[FILENAME_MAX];		/* 目标文件名 */

	printf("打开原文件：");   scanf("%s", sname);
	printf("打开目标文件：");   scanf("%s", dname);
	if ((sfp = fopen(sname, "rb")) == NULL)
		printf("\a原文件打开失败。\n");
	else
	{
		if ((dfp = fopen(dname, "wb")) == NULL)
			printf("\a目标文件打开失败。\n");
		else
		{
			while (n = fread(&ch, sizeof(int), 1, sfp) >= 1)//重要！！！！
			{
				fwrite(&ch, sizeof(int), 1, dfp);
			}
			fclose(dfp);
		}
		fclose(sfp);
		printf("done!\n");
	}
	return 0;
}
