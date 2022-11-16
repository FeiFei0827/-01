#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
8-1
#define diff(x,y) ((x)-(y))
int main()
{
	int a, b;
	printf("请输入数据a：   "); scanf("%d", &a);
	printf("请输入数据b：   "); scanf("%d", &b);
	printf("%d\n", diff(a, b));

}
8-2
#define max(x,y) ((x)>(y)?(x):(y))
int main()
{
	int a, b, c, d;
	printf("请输入数据a：   "); scanf("%d", &a);
	printf("请输入数据b：   "); scanf("%d", &b);
	printf("请输入数据c：   "); scanf("%d", &c);
	printf("请输入数据d：   "); scanf("%d", &d);
	 
	printf("%d\n",max(a,b),max(c,d));
	printf("%d\n",max(max(a,b),c),d);

}
8-3
#define swap(type,a,b) (b=b^a,a=a^b,b=b^a)              从左往右依次执行语句用，隔开语句
int main()
{
	int a = 10, b = 2;
	swap(int, a, b);
	printf("a=%d, b=%d\n", a, b);
}
8-4
#define NUM  10
#define swap(type,a,b) (b=b^a,a=a^b,b=b^a)   
void bsort(int x[], int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j  < n - 1-i; j++)
			x[j]>x[j+1] ? (swap(int, x[j], x[j+1])) :1;
	}
}
int main()
{
	int j;
	int a[NUM] = {1232,12342,545,67856,1423,13345,5645,2312,24,2364, };             函数宏还挺好使
	bsort(a, NUM);
	for (j = 0; j < NUM; j++)
		printf("%d ", a[j]);
}
8-5
enum sex{Man,Woman,End};
enum season{Sping,Summer,Fall,winter,Invalid};
enum sex select1()
{
	int a;
	do{
		printf("0~~Man  1~~Woman  2~~End:  ");
		scanf("%d", &a);
	} while (a<Man || a>End);
	return a;
}
enum season select2()
{
	int a;
	do{
		printf("0~~Sping  1~~Summer  2~~Fall  3~~Winter  4~~Invalid");
		scanf("%d", &a);
	} while (a<Sping || a>Invalid);
	return a;
}
int main()
{
	enum sex selected1;
	enum season selected2;
	do{
		switch (selected1 = select1())
		{
		case Man:
			printf("man\n");
			break;
		case Woman:
			printf("woman\n");
			break;
		}
	} while (selected1 != End);
}
8-6
int factorial(int x)
{
	int i;
	int a = 1;
	for (i = 1; i <= x; i++)
		a = i*a;
	return a;
}
int main()
{
	int a;
	scanf("%d", &a);
	printf("%d", factorial(a));
}
8-7

/*int factorial(int n)
{
if (n > 0)m,
return n * factorial(n - 1);
else
return 1;
}

int combination(int n, int r)
{

if (n > 0)
return  factorial(n) / (factorial(r) * factorial(n - r));
else
return 1;
}
int main()
{
int n;
int r;
printf("n=");
scanf("%d", &n);
printf("r=");
scanf("%d", &r);
printf("%d", combination(n, r));
}
*/
8-8
int  gcd9(int x, int y)
{
	int i;
	if (x%y != 0)
	{
		i = y;
		y = x % y;
		x = i;
		gcd9( x, y);
	}
	else
		return y;

}
int main()
{
	int x = 12, y = 8;
	printf("%d", gcd9(x, y));

}

int main(void)

{
	int ch, i = 0;

	while ((ch = getchar()) != EOF) {                                   这题让写的是一个程序而不是函数 检测时要用 will
		if (ch == '\n') i++;

	}

	printf("%d", i);

	return 0;

}
void dayin(int x[], int y)
{
	int i;
	for (i = 0; i <x[y]; i++)
		printf("*");
	printf("\n");
}
int main()
{
	int i, ch;
	int num[10] = { 0 };
	while ((ch = getchar()) != EOF)
	{
		if (ch >= '0' && ch <= '9')
			num[ch - '0']++;                        //重要
	}
	printf("数字字符出现的个数\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d:  ", i); dayin(num, i);

	}
}