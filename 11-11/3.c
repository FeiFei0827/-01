//3-1
//int main()
//{
//	int a, b;
//	printf("请输入两个整数\n");
//	printf("整数A："); scanf("%d", &a);
//	printf("整数B："); scanf("%d", &b);
//	if (a % b)
//	printf("B不是A的约数");
//	else
//		printf("B是A的约数");
//}
//3.3
//int main()
//{
//	int a= 0;
//	printf("输入一个整数，输出其绝对值\n");
//	scanf("%d", &a);    这句话出错就会显示存储有误
//	(a >= 0) ? (printf("%d\n", a)) : (printf("%d\n", -a));
//但人家希望你用if写 之前写过类似的所以在这里不写了
//}
//3.4
//int main()
//{
//	int a, b;
//	printf("判断两个整数大小\n");
//	printf("请输入一个整数A    ");            scanf("%d", &a);
//	printf("请输入一个整数B    ");            scanf("%d", &b);
//	if (a == b)
//		printf("A等于B\n");
//	else if (a > b)
//		printf("A大于B\n");
//	else if (a < b)
//		printf("A小于B\n");
//	else
//		printf("输入错误\n\a");
//}
//3.5
//不知道啥意思
//
//
//3-6
//int main()
//{
//	int a, b, c;
//	printf("输入整数a");     scanf("%d", &a);
//	printf("输入整数b");     scanf("%d", &b);
//	printf("输入整数c");     scanf("%d", &c);
//	if (a < b)
//		a = a;
//	else
//		a = b;
//	if (a < c)
//		a = a;
//	else
//		a = c;
//	printf("最小的整数是%d", a);
//
//
//3.7
//int main()
//{
//	int a, b, c,d;
//	printf("输入整数a");     scanf("%d", &a);
//	printf("输入整数b");     scanf("%d", &b);
//	printf("输入整数c");     scanf("%d", &c);
//	printf("输入整数d");     scanf("%d", &d);
//
//	if (a > b)
//		a = a;
//	else
//		a = b;
//	if (a > c)
//		a = a;
//	else
//		a = c;
//	if (a > d)
//		a = a;
//	else
//		a = d;
//	printf("最大的整数是%d", a);
//
//
//}
//3.8
//int main()
//{
//	int a, b;
//		printf("输入整数a");     scanf("%d", &a);
//		printf("输入整数b");     scanf("%d", &b);
//		if (a > b)
//			printf("他们的差是%d", a - b);
//		else
//			printf("他们的差是%d", b-a);
//}
//3-9
//int main()
//{
//	int a, b;
//	printf("输入整数a");     scanf("%d", &a);
//	printf("输入整数b");     scanf("%d", &b);
//	(a == b ? printf("它们相等\n") : printf("它们不相等\n"));
//
//}
//3-10
//int main()
//{
//	int a, b, c;
//	printf("输入整数a");     scanf("%d", &a);
//	printf("输入整数b");     scanf("%d", &b);
//	printf("输入整数c");     scanf("%d", &c);
//	if (a == b && b == c&& a == c)
//		printf("三个值相等");
//	else if
//		(a == b || b == c || a == c)
//		printf("两个值相等");
//	else
//		printf("三个值各不相同");
//}
//3-11
//int main()
//{
//	int a, b, c;
//	printf("输入整数a   ");     scanf("%d", &a);
//	printf("输入整数b   ");     scanf("%d", &b);
//	c = fabs(a - b);
//	if (a >= 11)
//		printf("它们的差大于等于11");
//	else
//		printf("它们的差小于等于10");
//}
//3-12
//int main()
//{
//	int a;
//	printf("请输入一个整数");
//	scanf("%d", &a);
//	switch (a % 2)
//	{
//	case 0:
//		printf("偶数");
//		break;
//	case 1:
//		printf("奇数");
//		break;
//	}
//
//}
//3-13
//int main()
//{
//	int a;
//	printf("请输入月份 判断季节          "); scanf("%d", &a);
//	switch (a)
//	{
//	case 3:
//	case 4:
//	case 5:
//		printf("春季");
//		break;
//	case 6:
//	case 7:
//	case 8:
//		printf("夏季");
//		break;
//	case 9:
//	case 10:
//	case 11:
//		printf("秋季");
//		break;
//	case 12:
//	case 1:
//	case 2:
//		printf("冬季");
//		break;
// 
////
//	}
//
//}
