#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <time.h>
13-1
int main()
{
	FILE *fp;
	char a[64];
	printf("�������ļ���:   "); scanf("%s", a);
	fp = fopen(a, "r");  //��Ҫ��.c�ļ�������ͬ�ļ����� �������·��
	if (fp == NULL)
		printf("���ļ����ڡ�\n");
	else
	{
		printf("���ļ������ڡ�\n");
		fclose(fp);
	}
}
13-2
int main()
{
	FILE *fp;
	char a[64];
	printf("�������ļ���:   "); scanf("%s", a);
	fp = fopen(a, "w");  //������ļ�����
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
	struct ren gaga[10] = {0};//���ﲻ��ʼ��������һЩ���� height�����ֵ���ܻ������Ч����ֵ
	double wsum = 0.0;
	if ((fp = fopen("abc.txt", "r")) == NULL)
		printf("�ļ���ʧ��\n");
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
	struct ren gaga[10] = { 0 };//���ﲻ��ʼ��������һЩ���� height�����ֵ���ܻ������Ч����ֵ
	double wsum = 0.0;
	if ((fp = fopen("123.txt", "w")) == NULL)
		printf("�ļ���ʧ��\n");
	else
	{
		while (scanf("%s%lf%lf", &gaga[i].name, &gaga[i].height, &gaga[i].weight) == 3)         //����EOF ��������
			i++;
	}

	for (j = 0; j < i; j++)
	{
		fprintf(fp,"%-10s %5.1f %5.1f\n", gaga[j].name, gaga[j].height, gaga[j].weight);
	}
	printf("_____________________________________\n");
}
���ϵĴ�
#include <stdio.h>
#define ninzu 4


typedef struct {
	char  name[100];    /* ���� */
	int   height;     /* ��� */
	int   weight;       /* ���� */
} Student;
int main(void)
{

	FILE* fp;
	if ((fp = fopen("gaoji", "w")) == NULL)                /* ���ļ� */
		printf("\a�ļ���ʧ�ܡ�\n");
	else {
		int i;
		Student stu[] = { { 0 }, { 0 }, { 0 }, { 0 }, { 0 }
		};
		puts("������������ߣ�����");
		for (i = 0; i < ninzu; i++) {
			scanf("%s%d%d", stu[i].name, &stu[i].height, &stu[i].weight);
			fprintf(fp, "%s %d %d\n", stu[i].name, stu[i].height, stu[i].weight);
		}
		fclose(fp);
	}
	return 0;

}// ���ַ�����Ȼ���� �ڴ�ռ�ý��� ���Ҹ�������ֹͣ���� 
13-5
#include <time.h>
#include <stdio.h>

char data_file[] = "gagaga.txt";				/* �ļ��� */

/*--- ȡ�ò���ʾ��һ������ʱ�����ں�ʱ�� ---*/
void get_data(void)
{
	FILE *fp;

	if ((fp = fopen(data_file, "r")) == NULL)				/* ���ļ� */
		printf("�������һ�����С�\n");
	else {
		int year, month, day, h, m, s;
		char mob[100];

		fscanf(fp, "%d%d%d%d%d%d%s", &year, &month, &day, &h, &m, &s ,mob);
		printf("��һ����������%d��%d��%d��%dʱ%d��%d�� ���飺%s\n",
			year, month, day, h, m, s, mob);
		fclose(fp);											/* �ر��ļ� */
	}
}

/*--- д�뱾������ʱ�����ں�ʱ�� ---*/
void put_data(void)
{
	char a[100];
	FILE *fp;
	time_t current = time(NULL);				/* ��ǰ����ʱ�� */
	struct tm *timer = localtime(&current);		/* �ֽ�ʱ��*/
	 
	if ((fp = fopen(data_file, "w")) == NULL)				/* ���ļ� */             //��������ڸ����Ƶ��ļ� ���ᴴ��һ��
		printf("\a�ļ���ʧ�ܡ�\n");
	else {
		printf("�����뵱ǰ�����飺"); scanf("%s", a);
		fprintf(fp, "%d %d %d %d %d %d %s",
			timer->tm_year + 1900, timer->tm_mon + 1, timer->tm_mday,
			timer->tm_hour, timer->tm_min, timer->tm_sec,a);
			fclose(fp);									/* �ر��ļ� */
	}
}

int main(void)
{
	get_data();			/* ȡ�ò���ʾ��һ������ʱ�����ں�ʱ�� */

	put_data();			/* д�뱾������ʱ�����ں�ʱ�� */

	return 0;
}
13-6
int main()
{
	int ch, i = 0;
	FILE *fp;
	char fname[100];
	printf("�������ļ�����"); scanf("%s", fname);
	if ((fp = fopen(fname, "r")) == NULL)
		printf("�ļ���ʧ�ܣ�\n");
	else
	{
		while ((ch = fgetc(fp)) != EOF) {
			if (ch == '\n')
			{
				i++;
			}
		}
		printf("%d��", i);
	}
}
13-7
int main()
{
	int ch, i = 0;
	FILE *fp;
	char fname[100];
	printf("�������ļ�����"); scanf("%s", fname);
	if ((fp = fopen(fname, "r")) == NULL)
		printf("�ļ���ʧ�ܣ�\n");
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
	char fname[FILENAME_MAX];        /* �ļ��� */

	printf("�ļ�����");
	scanf("%s", fname);

	if ((fp = fopen(fname, "r")) == NULL)                    /* ���ļ� */
		printf("\a�ļ���ʧ�ܡ�\n");
	else {
		while ((ch = fgetc(fp)) != EOF) {
			putchar(ch);
			if (ch >' ')   //������հ��ַ� ת���ַ��ȡ���������ַ���
			{
				cnt++;
			}
		}
		printf("�ַ�����%d", cnt);
		fclose(fp);                                            /* �ر��ļ� */
	}

	return 0;
}
13-8
int main(void)
{
	int ch;
	FILE *sfp;						/* ԭ�ļ� */
	FILE *dfp;						/* Ŀ���ļ� */
	char sname[FILENAME_MAX];		/* ԭ�ļ��� */
	char dname[FILENAME_MAX];		/* Ŀ���ļ��� */

	printf("��ԭ�ļ���");   scanf("%s", sname);
	printf("��Ŀ���ļ���");   scanf("%s", dname);

	if ((sfp = fopen(sname, "r")) == NULL)			/* ��ԭ�ļ� */
		printf("\aԭ�ļ���ʧ�ܡ�\n");
	else {
		if ((dfp = fopen(dname, "w")) == NULL)		/* ��Ŀ���ļ� */
			printf("\aĿ���ļ���ʧ�ܡ�\n");
		else {
			while ((ch = fgetc(sfp)) != EOF)
			{
				fputc(ch, dfp);
				fprintf(stdout,"%c", ch);
			}
			fclose(dfp);						/* �ر�Ŀ���ļ� */
		}
		fclose(sfp);							/* �ر�ԭ�ļ� */
	}

	return 0;
}
int gaga(char str[])
{
	// strΪ�ַ�ָ�룬ָ��һ���ַ�������������ַ���������'\0'��β
	// chrΪ�ַ�ָ�룬ָ��str��ָ����ַ��������ĵ�һ���ַ��ĵ�ַ����'��'�ַ�������char�еĵ�һ��
	char *chr = str;

	printf("%zu %s\n", strlen(str), str);
	// �������'\0'��˵���ַ���������
	while (*chr != '\0')
	{
		// ���chr�ı���Ϊ��������˵��������һ������
		if (*chr < 0)
		{
			// ��ӡ���ּ����ֵı���
			// ע������char����������Ŵ�ӡ��%c%c����������ӡ�� ?? 
			printf("%c%c\n", *chr, *(chr + 1));
			// chr���������ֽڣ���Ϊÿ�����ֶ�������char��ɣ�
			chr += 2;
		}
		else
		{
			// ��ӡӢ���ַ�
			printf("%c", *chr);
			// chr����һ���ֽ�
			++chr;
		}
	}

	return 0;
}

13-9
int main(void)
{
	int ch;
	FILE *sfp;						/* ԭ�ļ� */
	FILE *dfp;						/* Ŀ���ļ� */
	char sname[FILENAME_MAX];		/* ԭ�ļ��� */
	char dname[FILENAME_MAX];		/* Ŀ���ļ��� */

	printf("��ԭ�ļ���");   scanf("%s", sname);
	printf("��Ŀ���ļ���");   scanf("%s", dname);

	if ((sfp = fopen(sname, "r")) == NULL)			/* ��ԭ�ļ� */
		printf("\aԭ�ļ���ʧ�ܡ�\n");
	else {
		if ((dfp = fopen(dname, "w")) == NULL)		/* ��Ŀ���ļ� */
			printf("\aĿ���ļ���ʧ�ܡ�\n");
		else {
			while ((ch = fgetc(sfp)) != EOF)
			{
				if (ch >= 'a'&&ch =< 'z')
					ch -= 32;
				fputc(ch, dfp);
				fprintf(stdout,"%c", ch);
			}
			fclose(dfp);						/* �ر�Ŀ���ļ� */
		}
		fclose(sfp);							/* �ر�ԭ�ļ� */
	}

	return 0;
}
13-10
int main(void)
{
	int ch;
	FILE *sfp;						/* ԭ�ļ� */
	FILE *dfp;						/* Ŀ���ļ� */
	char sname[FILENAME_MAX];		/* ԭ�ļ��� */
	char dname[FILENAME_MAX];		/* Ŀ���ļ��� */

	printf("��ԭ�ļ���");   scanf("%s", sname);
	printf("��Ŀ���ļ���");   scanf("%s", dname);

	if ((sfp = fopen(sname, "r")) == NULL)			/* ��ԭ�ļ� */
		printf("\aԭ�ļ���ʧ�ܡ�\n");
	else {
		if ((dfp = fopen(dname, "w")) == NULL)		/* ��Ŀ���ļ� */
			printf("\aĿ���ļ���ʧ�ܡ�\n");
		else {
			while ((ch = fgetc(sfp)) != EOF)
			{
				if (ch >= 'A'&&ch =< 'Z')
					ch += 32;
				fputc(ch, dfp);
				fprintf(stdout,"%c", ch);
			}
			fclose(dfp);						/* �ر�Ŀ���ļ� */
		}
		fclose(sfp);							/* �ر�ԭ�ļ� */
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
		printf("\a�ļ���ʧ�ܡ�\n");
	else {
		fwrite(&v, sizeof(double), 10, fp);
		fclose(fp);
	}                                               

	if ((fp = fopen("abc.txt", "rb")) == NULL)       
		printf("\a�ļ���ʧ�ܡ�\n");
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

char data_file[] = "date.txt";				/* �ļ��� */

/*--- ȡ�ò���ʾ��һ������ʱ�����ں�ʱ�� ---*/
void get_data(void)
{
	FILE *fp;
	struct tm timer[20];
	if ((fp = fopen(data_file, "rb")) == NULL)				/* ���ļ� */
		printf("�������һ�����С�\n");
	else {
		int year, month, day, h, m, s;
		fread(timer, 4, 6, fp);
		printf("��һ����������%d��%d��%d��%dʱ%d��%d�롣\n",
			timer->tm_year + 1900, timer->tm_mon + 1, timer->tm_mday,
			timer->tm_hour, timer->tm_min, timer->tm_sec);                           //Ҫ��ָ������ϵ
		fclose(fp);											/* �ر��ļ� */
	}
}

/*--- д�뱾������ʱ�����ں�ʱ�� ---*/
void put_data(void)
{
	FILE *fp;
	time_t current = time(NULL);				/* ��ǰ����ʱ�� */
	struct tm *timer = localtime(&current);		/* �ֽ�ʱ��*/

	if ((fp = fopen(data_file, "wb")) == NULL)				/* ���ļ� */
		printf("\a�ļ���ʧ�ܡ�\n");
	else {
		fwrite(timer, 4, 6, fp);
		fclose(fp);											/* �ر��ļ� */
	}
}
 
int main(void)
{
	get_data();			/* ȡ�ò���ʾ��һ������ʱ�����ں�ʱ�� */

	put_data();			/* д�뱾������ʱ�����ں�ʱ�� */

	return 0;
}
13-13
int main(void)
{
	int ch;
	FILE *sfp;						/* ԭ�ļ� */
	FILE *dfp;						/* Ŀ���ļ� */
	char sname[FILENAME_MAX];		/* ԭ�ļ��� */
	char dname[FILENAME_MAX];		/* Ŀ���ļ��� */
	int p[20];
	printf("��ԭ�ļ���");   scanf("%s", sname);
	printf("��Ŀ���ļ���");   scanf("%s", dname);

	if ((sfp = fopen(sname, "r")) == NULL)			/* ��ԭ�ļ� */
		printf("\aԭ�ļ���ʧ�ܡ�\n");
	else {
		if ((dfp = fopen(dname, "w")) == NULL)		/* ��Ŀ���ļ� */
			printf("\aĿ���ļ���ʧ�ܡ�\n");
		else {
			do
			{
				fread(p, 1, 1, sfp);
				fwrite(p, 1, 1, dfp);
			}while (*p != EOF);

					/* �ر�Ŀ���ļ� */
		}
		fclose(sfp);							/* �ر�ԭ�ļ� */
	}

	return 0;
}
��

int main(void)
{
	int n;
	int ch;
	FILE *sfp;						/* ԭ�ļ� */
	FILE *dfp;						/* Ŀ���ļ� */
	char sname[FILENAME_MAX];		/* ԭ�ļ��� */
	char dname[FILENAME_MAX];		/* Ŀ���ļ��� */

	printf("��ԭ�ļ���");   scanf("%s", sname);
	printf("��Ŀ���ļ���");   scanf("%s", dname);
	if ((sfp = fopen(sname, "rb")) == NULL)
		printf("\aԭ�ļ���ʧ�ܡ�\n");
	else
	{
		if ((dfp = fopen(dname, "wb")) == NULL)
			printf("\aĿ���ļ���ʧ�ܡ�\n");
		else
		{
			while (n = fread(&ch, sizeof(int), 1, sfp) >= 1)//��Ҫ��������
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
