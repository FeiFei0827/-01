//#define _CRT_SECURE_NO_WARNINGS 1
//#include <windows.h>
//#include <stdio.h>
//#include <time.h>
//#include <stdlib.h>
//1-5
//int main()
//{
//	int aaaa;
//	int i, j, a, b, c=0,k=1;
//	srand(time(NULL));
//	a = rand();
//	Sleep(50);
//	b = rand();
//	if (a < b)
//	{
//		b = a^b;
//		a = a^b;
//		b = a^b;
//	}
//	aaaa = a - b;
//	j = rand() % (aaaa+1) + b;
//	while(aaaa > 0)
//	{
//		aaaa=aaaa >> 2;
//		k++;
//	}
//	printf("��һ������ ��λ��%d~%d֮�� ����%d�λ���\n", b, a,k);
//		do{
//		printf("�£�         "); scanf("%d", &i);
//		if(i > j)
//			printf("�´��ˣ�\n");
//		else if (i < j)
//			printf("��С�ˣ�\n");
//		else
//		{
//			printf("�¶��ˣ�\n");
//			break;
//		}
//		c++;
//	} while (c < k);
//		if (c = k)
//		printf("����\n");
//		else
//		printf("��ϲ\n");
//	
//}