#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#define NAME_LEN 64
struct student{
	char name[NAME_LEN];
	int height;
	float weight;
	long schols;
};
int main()
{
	struct student takao = { "Takao", 173, 86.2 };
	printf("姓名%s\n", takao.name);
	printf("身高=%d\n", takao.height);
	printf("体重=%.1f\n", takao.weight);
	printf("奖学金= %ld\n", takao.schols);
	printf("%p\n", &takao.name);
	printf("%p\n", &takao.height);
	printf("%p\n", &takao.weight);
	printf("%p\n", &takao.schols);                                                          //直接加地址符就可以找到地址啦

}
12 - 2
#define NAME_LEN 64
typedef struct student{
	char name[NAME_LEN];
	int height;
	float weight;
	long schols;
}Student;
void hiroko(Student *std)
{
	if (std->height < 180) std->height = 180;
	if (std->weight>80) std->weight = 80;
}
int main()
{
	Student sanaka;
	printf("姓名（char）："); scanf("%s", &sanaka.name);
	printf("身高（int）："); scanf("%d", &sanaka.height);
	printf("体重（float）："); scanf("%f", &sanaka.weight);
	printf("奖学金（long）： "); scanf("%d", &sanaka.schols);

	hiroko(&sanaka);
	printf("姓名%s\n", sanaka.name);
	printf("身高=%d\n", sanaka.height);
	printf("体重=%.1f\n", sanaka.weight);
	printf("奖学金= %ld\n", sanaka.schols);


}
//12-3
struct xyz
{
	int x;
	long y;
	double z;
};
struct xyz scan_xyz()
{
	struct xyz abc;
	int x; long y; double z;
	scanf("%d", &x);  abc.x = x;
	scanf("%d", &y);  abc.y = y;
	scanf("%lf", &z);  abc.z = z;                                //双精度必须用lf
	return abc;
}
int main()
{
	struct xyz a;
	a = scan_xyz();
	printf("%d\n", a.x);
	printf("%d\n", a.y);
	printf("%f\n", a.z);

}
12 - 4

#define NUMBER	5		//学生人数
#define NAME_LEN 64
typedef struct{
	char 	name[NAME_LEN];	//姓名 
	int 	height;		//身高 
	float	weight;		//体重 
	long	schols;		//奖学金 

} Student;

对x和y的学生进行调换
void swap_Student(Student *x, Student *y)
{
	Student temp = *x;
	*x = *y;
	*y = temp;
}

对数组data前n个元素进行升序排列
void sort_by_height(Student a[], int n)
{
	int i, j;
	for (i = 0; i<n; i++)
	{
		for (j = n - 1; j>i; j--)
		if (a[j - 1].height > a[j].height)                                     //冒泡排序                                                                                                                                                                                                                                                                                                                                                                       
			swap_Student(&a[j - 1], &a[j]);
	}
}
void sort_by_name(Student a[], int n)
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = n - 1; j>i; j--)
		if (strcmp(a[j - 1].name, a[j].name))
			swap_Student(&a[j - 1], &a[j]);
	}
}
int main(void)
{
	int i;
	int a;
	Student std[] = {
		{ "Sato", 178, 61.0, 80000 },			//佐藤 
		{ "Sanaka", 175, 60.5, 70000 },			//佐中 
		{ "Takao", 173, 80.0, 0 },				//高尾 
		{ "Mike", 165, 72.0, 70000 },			//平木 
		{ "Masaki", 179, 77.5, 70000 },			//真崎 
	};
	for (i = 0; i < NUMBER; i++)
		printf("%-8s %6d%6.1f%7ld\n",
		std[i].name, std[i].height, std[i].weight, std[i].schols);
	printf("用身高升序排序输入1 用姓名排序输入0\n"); scanf("%d", &a);
	if (a)
		sort_by_height(std, NUMBER);
	else
		sort_by_name(std, NUMBER);
	puts("\n按身高排序。");
	for (i = 0; i < NUMBER; i++)
		printf("%-8s %6d%6.1f%7ld\n",
		std[i].name, std[i].height, std[i].weight, std[i].schols);
	return (0);

}
12 - 5
#define sqr(n)  ((n) * (n))

typedef struct {
	double x;    /* X坐标 */
	double y;    /* Y坐标 */
} Point;

typedef struct {
	Point  pt;        /* 当前位置 */
	double fuel;    /* 剩余燃料 */
} Car;

double distance_of(Point pa, Point pb)
{
	return sqrt(sqr(pa.x - pb.x) + sqr(pa.y - pb.y));
}

void put_info(Car c)
{
	printf("当前位置：(%.2f, %.2f)\n", c.pt.x, c.pt.y);
	printf("剩余燃料：%.2f升\n", c.fuel);
}

int move(Car* c, Point dest)
{
	double d = distance_of(c->pt, dest);    /* 行驶距离 */
	if (d > c->fuel)                        /* 行驶距离超过了燃料 */
		return 0;                            /* 无法行驶 */
	c->pt = dest;        /* 更新当前位置（向dest移动） */
	c->fuel -= d;        /* 更新燃料（减去行驶距离d所消耗的燃料） */
	return 1;                                /* 成功行驶 */
}

int main(void)
{
	Car mycar = { { 0.0, 0.0 }, 90.0 };
	int move_method;
	double x_distance;
	double y_distance;
	while (1) {
		int select;
		Point dest;            /* 目的地的坐标 */

		put_info(mycar);    /* 显示当前位置和剩余燃料 */

		printf("开动汽车吗【Yes···1 / No···0】：");
		scanf("%d", &select);
		if (select != 1) break;

		printf("两种方法,1输入目的地,2输入X方向和Y方向的行驶距离:");
		scanf("%d", &move_method);
		switch (move_method)
		{
		case 1:
			printf("目的地的X坐标：");  scanf("%lf", &dest.x);
			printf("        Y坐标：");  scanf("%lf", &dest.y);
			break;
		case 2:
			printf("X方向行驶距离："); scanf("%lf", &x_distance);                          //这样可以只有一个函数
			printf("Y方向行驶距离："); scanf("%lf", &y_distance);
			dest.x = x_distance + mycar.pt.x;
			dest.y = y_distance + mycar.pt.y;
			break;
		}
		if (!move(&mycar, dest))
			puts("\a燃料不足无法行驶。");
	}

	return 0;
}
