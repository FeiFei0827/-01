#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
10-1
void adjust_point(int *n)
{
	if (*n < 0)
		*n = 0;
	if (*n>100)                                      //记得是指针
		*n = 100;
}
int main()
{
	int a;
	printf("请输入一个整数:  "); scanf("%d", &a);
	printf("%d\n", a);
	adjust_point(&a);
	printf("%d\n", a);

}
10-2
int R(int n)
{
	if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0)
		return 1;
	else
		return 0;
}
int M(int x,int y)
{
	if (x == 1 || x == 3 || x == 5 || x == 7 || x == 8 || x == 10 || x == 12  )
		return 31;
	if (x == 2)
	{
		if (y)
			return 29;
		else
			return 28;
	}
	else
		return 30;
}
void decrement_date(int *y, int *m, int*d)
{
	*d = *d - 1;
	if (*d == 0)
	{
		*m = *m - 1;
		if (*m == 0)
		{
			*y = *y - 1;
			*m = 12;
		}
		*d = M(*m, R(*y));
	}
	
}
void increment_date(int *y, int *m, int*d) 
{
	*d = *d + 1;
	if (*d > M(*m, R(*y)))
	{
		*d = 1;
		*m += 1;
	}
	if (*m > 12)
	{
		*m = 1;
			* y = *y + 1;

	}
}
int main()
{
	int a, b, c;
	printf("请输入年月日\n");
	do{
		printf("年："); scanf("%d", &a);
	} while (a < 0);
	do{
		printf("月："); scanf("%d", &b);
	} while (b>12 || b<0);
	do
	{
		printf("日："); scanf("%d", &c);
	} while (c>31 || b < 0);
	decrement_date(&a, &b, &c);
	increment_date(&a, &b, &c);
		printf("%d %d %d", a, b, c);
}
void swap(int *x, int *y)
{
	*y = *x^*y;
	*x = *x^*y;
	*y = *x^*y;
}

void sort3(int *x, int *y, int *z)
{
	*x < *y ? 1 : swap(x, y);
	*y < *z ? 1 : swap(y, z);
	*x < *y ? 1 : swap(x, y);
}


int main()
{
	int a, b, c;
		printf("请输入数字a： "); scanf("%d", &a);
		printf("请输入数字b： "); scanf("%d", &b);
		printf("请输入数字c： "); scanf("%d", &c);
	
		sort3(&a, &b, &c);
		printf("%d %d %d", a, b, c);
}
10-4
#define N 5
void set_idx(int *v, int n)
{
	int i = 0;
	for (i = 0; i < n; i++)
		*(v+i) = i;
}
int main()
{
 	int i = 0;
	int arr[N] = { 1, 2, 3, 4 };
	int* a = arr;
	set_idx(&arr, N);
	for (i = 0; i < N; i++)
		printf("%d", *(a + i));
while (*(a + i) != ' \0')
{
	printf("%d", *(a + i));
	i++;
}             不可行

#define number 5
void set_idx(int*v, int n) {
	int i = 0;
	for (i = 0; i < n; i++) {
		*(v + i) = i;
	}
}

int main() {
	int i;
	int x[number];
	set_idx(x, number);
	for (i = 0; i < number; i++) {
		printf("x[%d]=%d", i, x[i]);
		putchar('\n');
	}
10-5



