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
	printf("����%s\n", takao.name);
	printf("���=%d\n", takao.height);
	printf("����=%.1f\n", takao.weight);
	printf("��ѧ��= %ld\n", takao.schols);
	printf("%p\n", &takao.name);
	printf("%p\n", &takao.height);
	printf("%p\n", &takao.weight);
	printf("%p\n", &takao.schols);                                                          //ֱ�Ӽӵ�ַ���Ϳ����ҵ���ַ��

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
	printf("������char����"); scanf("%s", &sanaka.name);
	printf("��ߣ�int����"); scanf("%d", &sanaka.height);
	printf("���أ�float����"); scanf("%f", &sanaka.weight);
	printf("��ѧ��long���� "); scanf("%d", &sanaka.schols);

	hiroko(&sanaka);
	printf("����%s\n", sanaka.name);
	printf("���=%d\n", sanaka.height);
	printf("����=%.1f\n", sanaka.weight);
	printf("��ѧ��= %ld\n", sanaka.schols);


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
	scanf("%lf", &z);  abc.z = z;                                //˫���ȱ�����lf
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

#define NUMBER	5		//ѧ������
#define NAME_LEN 64
typedef struct{
	char 	name[NAME_LEN];	//���� 
	int 	height;		//��� 
	float	weight;		//���� 
	long	schols;		//��ѧ�� 

} Student;

��x��y��ѧ�����е���
void swap_Student(Student *x, Student *y)
{
	Student temp = *x;
	*x = *y;
	*y = temp;
}

������dataǰn��Ԫ�ؽ�����������
void sort_by_height(Student a[], int n)
{
	int i, j;
	for (i = 0; i<n; i++)
	{
		for (j = n - 1; j>i; j--)
		if (a[j - 1].height > a[j].height)                                     //ð������                                                                                                                                                                                                                                                                                                                                                                       
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
		{ "Sato", 178, 61.0, 80000 },			//���� 
		{ "Sanaka", 175, 60.5, 70000 },			//���� 
		{ "Takao", 173, 80.0, 0 },				//��β 
		{ "Mike", 165, 72.0, 70000 },			//ƽľ 
		{ "Masaki", 179, 77.5, 70000 },			//���� 
	};
	for (i = 0; i < NUMBER; i++)
		printf("%-8s %6d%6.1f%7ld\n",
		std[i].name, std[i].height, std[i].weight, std[i].schols);
	printf("�����������������1 ��������������0\n"); scanf("%d", &a);
	if (a)
		sort_by_height(std, NUMBER);
	else
		sort_by_name(std, NUMBER);
	puts("\n���������");
	for (i = 0; i < NUMBER; i++)
		printf("%-8s %6d%6.1f%7ld\n",
		std[i].name, std[i].height, std[i].weight, std[i].schols);
	return (0);

}
12 - 5
#define sqr(n)  ((n) * (n))

typedef struct {
	double x;    /* X���� */
	double y;    /* Y���� */
} Point;

typedef struct {
	Point  pt;        /* ��ǰλ�� */
	double fuel;    /* ʣ��ȼ�� */
} Car;

double distance_of(Point pa, Point pb)
{
	return sqrt(sqr(pa.x - pb.x) + sqr(pa.y - pb.y));
}

void put_info(Car c)
{
	printf("��ǰλ�ã�(%.2f, %.2f)\n", c.pt.x, c.pt.y);
	printf("ʣ��ȼ�ϣ�%.2f��\n", c.fuel);
}

int move(Car* c, Point dest)
{
	double d = distance_of(c->pt, dest);    /* ��ʻ���� */
	if (d > c->fuel)                        /* ��ʻ���볬����ȼ�� */
		return 0;                            /* �޷���ʻ */
	c->pt = dest;        /* ���µ�ǰλ�ã���dest�ƶ��� */
	c->fuel -= d;        /* ����ȼ�ϣ���ȥ��ʻ����d�����ĵ�ȼ�ϣ� */
	return 1;                                /* �ɹ���ʻ */
}

int main(void)
{
	Car mycar = { { 0.0, 0.0 }, 90.0 };
	int move_method;
	double x_distance;
	double y_distance;
	while (1) {
		int select;
		Point dest;            /* Ŀ�ĵص����� */

		put_info(mycar);    /* ��ʾ��ǰλ�ú�ʣ��ȼ�� */

		printf("����������Yes������1 / No������0����");
		scanf("%d", &select);
		if (select != 1) break;

		printf("���ַ���,1����Ŀ�ĵ�,2����X�����Y�������ʻ����:");
		scanf("%d", &move_method);
		switch (move_method)
		{
		case 1:
			printf("Ŀ�ĵص�X���꣺");  scanf("%lf", &dest.x);
			printf("        Y���꣺");  scanf("%lf", &dest.y);
			break;
		case 2:
			printf("X������ʻ���룺"); scanf("%lf", &x_distance);                          //��������ֻ��һ������
			printf("Y������ʻ���룺"); scanf("%lf", &y_distance);
			dest.x = x_distance + mycar.pt.x;
			dest.y = y_distance + mycar.pt.y;
			break;
		}
		if (!move(&mycar, dest))
			puts("\aȼ�ϲ����޷���ʻ��");
	}

	return 0;
}
