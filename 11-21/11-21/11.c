#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <ctype.h>
int main()
{
	char* p = "123";
	printf("p = \"%s\"\n", p);
	/*p = "456";*/
	p = "456" + 1;
	printf("p = \"%s\"\n", p);
	return 0; //ֻ�������56������Ϊpָ��ĵ�ַ+1��������������һλ�����Զ��������ݴӡ�456������ˡ�56\0".

}
11 - 2
int num(int x[])
{
	int i = 0;
	while (x[i] != '\0')
		i++;
	return i;
}
int main()
{

	int i;
	char a[][5] = { "LISP", "C", "Ada" };
	char* p[] = { "PAUL", "X", "MAC" };
	for (i = 0; i <num(a); i++)
		printf("a[%d] = \"%s\"\n", i, a[i]);
	for (i = 0; i <num(p); i++)
		printf("p[%d] = \"%s\"\n", i, p[i]);
}
#include <stdio.h>

int main(void)
{
	int  i;
	char a[][128] = { "LISP", "C", "Ada" };
	char* p[] = { "PAUL", "X", "MAC", "SKTNB" };//�� sizeof(a) / sizeof(a[0])��ʾ����Ԫ�ظ���
	for (i = 0; i <(sizeof(a) / sizeof(a[0])); i++)
		printf("a[%d] = \"%s\"\n", i, a[i]);

	for (i = 0; i < (sizeof(p) / sizeof(p[0])); i++)
		printf("p[%d] = \"%s\"\n", i, p[i]);

	return 0;
}
char* str_copy(char* d, const char* s)
{
	char* t = d;

	while (*d++ = *s++)
		;
	return t;
}

int main(void)
{
	char str[128] = "ABC";
	char tmp[128];

	printf("str = \"%s\"\n", str);

	printf("���Ƶ��ǣ�", tmp);
	scanf("%s", tmp);



	puts("�����ˡ�");
	printf("str = \"%s\"\n", str_copy(str, tmp));

	return 0;
}
void put_string(const char* s) {
	putchar(*s);
	while (*s++)
	{
		putchar(*s);
	}

}



int main() {
	char s[123];
	printf("�������ַ���:");
	scanf("%s", s);
	put_string(s);
}
char *str_chnum(const char* s, int c) {



	while (*s++) {
		char* t = s;

		if (*s == c) {
			return     t;
			break;
		}


	}

	return NULL;
}



int main() {
	char s[123];
	char c;
	printf("Ҫ�������ַ��ǣ�");
	scanf("%c", &c);
	printf("�������ַ���:");
	scanf("%s", s);

	printf("%s", str_chnum(s, c));
}
11 - 7

void str_toupper(char *s)
{
	while (*s){
		*s = toupper(*s);
		*s++;
	}
}
void str_tolower(char *s)
{

}
int main()
{
	char p[] = "abcABC123";
	printf("%s\n", p);
	str_toupper(p);
	printf("%s\n", p);
}
void str_toupper(char *s)
{
	while (*s) {
		*s = toupper(*s);
		*s++;
	}

}

/*--- ���ַ����е�Ӣ���ַ�תΪСд��ĸ ---*/
void str_tolower(char *s)
{
	while (*s) {
		*s = tolower(*s);
		*s++;
	}
}

int main(void)
{
	char str[128] = "asdasdASDASD122";
	//printf("�������ַ�����");
	//scanf("%s", str);
	//char *str = "asdasdASDASD122";           Ϊʲôָ�����ַ�������ʵ���أ�
	printf("��д��ĸ��%s\n", str);
	str_toupper(str);
	printf("��д��ĸ��%s\n", str);

	str_tolower(str);
	printf("Сд��ĸ��%s\n", str);

	return 0;
}
11 - 8
void del_dight(char *str)
{
	int i;
	while (*str != '\0')
	{
		while (*str >= '0'&&*str <= '9')
		{
			str++;
			i++;
			*str
		}
		*str++;
	}
}
int main()
{
	char a[128];
	printf("������һ���ַ�����"); scanf("%s", &a);
	printf("%s    \n", a);
	del_dight(a);
	printf("%s    \n", a);

}

#include <stdio.h>

void del_digit(char *str) {

	char *temp = str;

	while (*temp)
	if ((*temp >= '0') && (*temp <= '9'))
		temp++;
	else                                                                                  //�޸��ַ��������ȴ���һ����ԭ�ַ�����ͬ������
		*str++ = *temp++;                                                                 //ͨ���޸��������ٸ���������ķ�ʽ �޸�����
	*str = '\0';
}


int main(void) {
	char str[128];

	puts("������һ���ַ���");
	scanf("%s", str);
	printf("%s\n", str);

	del_digit(str);

	printf("%s", str);

	return 0;
}
#include <string.h>
int main()
{
	char a[128] = { "sdasdsadswcvsa" };
	char b[128];
	printf("%d", strlen(a));
}
int main()
{
	char a[128] = { "sdasdsadswcvsa" };
	char b[128] = { 0 };
	printf("%s\n", a);
	printf("%s\n", b);
	strcpy(b, a);
	printf("%s\n", a);
	printf("%s\n", b);


}
int main()
{
	char a[128] = { "sdasdsadswcvsa" };
	char b[128] = { 0 };
	printf("%s\n", a);
	printf("%s\n", b);
	strncpy(b, a, 5);
	printf("%s\n", a);
	printf("%s\n", b);


}
int main()
{
	char a[128] = { "sdasdsadswcvsa" };
	char b[128] = { "12389214371284" };
	printf("%s\n", a);
	printf("%s\n", b);
	printf("%s\n", strcat(b, a));                                        //��a�ӵ�b���� �Ҹı�b
	printf("%s\n", a);
	printf("%s\n", b);

}
int main()
{
	char a[128] = { "sdasdsadswcvsa" };
	char b[128] = { "12389214371284" };
	printf("%s\n", a);
	printf("%s\n", b);
	printf("%s\n", strncat(b, a, 5));                                        //��a�ӵ�b���� �Ҹı�b
	printf("%s\n", a);
	printf("%s\n", b);

}
int main()
{
	char a[128] = { "sdasdsadswcvsa" };
	char b[128] = { "12389214371284" };
	printf("%d", strcmp(a, b));                                       //a>b��������������Ĭ����1������-1
}
int main()
{
	char a[128] = { "123sdsadswcvsa" };
	char b[128] = { "12889214371284" };
	printf("%d", strncmp(a, b, 2));                                       //a>b��������������Ĭ����1������-1  һ����Ϊ��
}
11 - 10
int atoi(const char *nptr)
{
	int i = -1;
	int a[128];
	while (*nptr != '0')
	{
		a[i++] = (int)*nptr;
		*nptr++;

	}
	return a;
}
int main()
{
	char a[128] = { "11233sxfvasdfas134" };
	printf("%d\n", a);
	/*printf("%d", atoi(a));*/

}