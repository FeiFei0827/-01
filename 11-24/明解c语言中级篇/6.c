//#define _CRT_SECURE_NO_WARNINGS 1
//#include <windows.h>
//#include <stdio.h>
//#include <time.h>
//#include <stdlib.h>
//1-6
//int main()
//{
//	int aaaa,p;
//	int i, j, a, b, c=0,k=1;
//	srand(time(NULL));
//	printf("��ѡ���Ѷȣ�0/1/2/3\n");
//	scanf("%d", &p);
//	switch (p)
//	{
//	case 0:
//			  p = 9;
//			  break;
//	case 1:
//			  p = 99;
//			  break;
//	case 2:
//              p = 999;
//			  break;
//	case 4:
//			  p = 9999;
//			  break;
//	}
//	j = rand() % p + 1;
//	printf("��һ������ ��λ��1~%d֮��",p);
//	while(p > 0)
//	{
//		p=p >> 2;
//		k++;
//	}
//	printf("����%d�λ���\n", k);
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
//		if (c == k)
//		printf("����\n");
//		else
//		printf("��ϲ\n");
//	
//}