//3-1
//int main()
//{
//	int a, b;
//	printf("��������������\n");
//	printf("����A��"); scanf("%d", &a);
//	printf("����B��"); scanf("%d", &b);
//	if (a % b)
//	printf("B����A��Լ��");
//	else
//		printf("B��A��Լ��");
//}
//3.3
//int main()
//{
//	int a= 0;
//	printf("����һ����������������ֵ\n");
//	scanf("%d", &a);    ��仰����ͻ���ʾ�洢����
//	(a >= 0) ? (printf("%d\n", a)) : (printf("%d\n", -a));
//���˼�ϣ������ifд ֮ǰд�����Ƶ����������ﲻд��
//}
//3.4
//int main()
//{
//	int a, b;
//	printf("�ж�����������С\n");
//	printf("������һ������A    ");            scanf("%d", &a);
//	printf("������һ������B    ");            scanf("%d", &b);
//	if (a == b)
//		printf("A����B\n");
//	else if (a > b)
//		printf("A����B\n");
//	else if (a < b)
//		printf("AС��B\n");
//	else
//		printf("�������\n\a");
//}
//3.5
//��֪��ɶ��˼
//
//
//3-6
//int main()
//{
//	int a, b, c;
//	printf("��������a");     scanf("%d", &a);
//	printf("��������b");     scanf("%d", &b);
//	printf("��������c");     scanf("%d", &c);
//	if (a < b)
//		a = a;
//	else
//		a = b;
//	if (a < c)
//		a = a;
//	else
//		a = c;
//	printf("��С��������%d", a);
//
//
//3.7
//int main()
//{
//	int a, b, c,d;
//	printf("��������a");     scanf("%d", &a);
//	printf("��������b");     scanf("%d", &b);
//	printf("��������c");     scanf("%d", &c);
//	printf("��������d");     scanf("%d", &d);
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
//	printf("����������%d", a);
//
//
//}
//3.8
//int main()
//{
//	int a, b;
//		printf("��������a");     scanf("%d", &a);
//		printf("��������b");     scanf("%d", &b);
//		if (a > b)
//			printf("���ǵĲ���%d", a - b);
//		else
//			printf("���ǵĲ���%d", b-a);
//}
//3-9
//int main()
//{
//	int a, b;
//	printf("��������a");     scanf("%d", &a);
//	printf("��������b");     scanf("%d", &b);
//	(a == b ? printf("�������\n") : printf("���ǲ����\n"));
//
//}
//3-10
//int main()
//{
//	int a, b, c;
//	printf("��������a");     scanf("%d", &a);
//	printf("��������b");     scanf("%d", &b);
//	printf("��������c");     scanf("%d", &c);
//	if (a == b && b == c&& a == c)
//		printf("����ֵ���");
//	else if
//		(a == b || b == c || a == c)
//		printf("����ֵ���");
//	else
//		printf("����ֵ������ͬ");
//}
//3-11
//int main()
//{
//	int a, b, c;
//	printf("��������a   ");     scanf("%d", &a);
//	printf("��������b   ");     scanf("%d", &b);
//	c = fabs(a - b);
//	if (a >= 11)
//		printf("���ǵĲ���ڵ���11");
//	else
//		printf("���ǵĲ�С�ڵ���10");
//}
//3-12
//int main()
//{
//	int a;
//	printf("������һ������");
//	scanf("%d", &a);
//	switch (a % 2)
//	{
//	case 0:
//		printf("ż��");
//		break;
//	case 1:
//		printf("����");
//		break;
//	}
//
//}
//3-13
//int main()
//{
//	int a;
//	printf("�������·� �жϼ���          "); scanf("%d", &a);
//	switch (a)
//	{
//	case 3:
//	case 4:
//	case 5:
//		printf("����");
//		break;
//	case 6:
//	case 7:
//	case 8:
//		printf("�ļ�");
//		break;
//	case 9:
//	case 10:
//	case 11:
//		printf("�＾");
//		break;
//	case 12:
//	case 1:
//	case 2:
//		printf("����");
//		break;
// 
////
//	}
//
//}
